/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 00:10:59 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 03:16:42 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Finds memlink associated with mem in the memchain specified
**  by label and returns it.
** Searches through all memchains if label is NULL.
** Returns NULL if pointer can not be found.
*/

static t_memlink	*find_link(t_memchain *mchain, void *mem)
{
	t_memlink	*mlink;

	mlink = mchain->links;
	while (mlink)
	{
		if (mlink->content == mem)
			return (mlink);
		mlink = mlink->next;
	}
	return (NULL);
}

t_memlink	*ft_mlink_find(const char *label, void *mem)
{
	t_memchain	*mchain;
	t_memlink	*mlink;

	if (label)
	{
		if (!(mchain = ft_mchain_get(label, FALSE)))
			return (NULL);
		return (find_link(mchain, mem));
	}
	else
	{
		mchain = *ft_mchain_gethead();
		while (mchain)
		{
			if ((mlink = find_link(mchain, mem)))
				return (mlink);
			mchain = mchain->next;
		}
	}
	return (NULL);
}
