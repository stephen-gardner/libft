/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 00:10:59 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/11 00:22:19 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Finds memlink associated with mem and returns it. Returns
** NULL if pointer can not be found.
*/

t_memlink	*ft_mlink_find(void *mem)
{
	t_memchain	*mchain;
	t_memlink	*mlink;

	mchain = *ft_mchain_gethead();
	while (mchain)
	{
		mlink = mchain->links;
		while (mlink)
		{
			if (mlink->content == mem)
				return (mlink);
			mlink = mlink->next;
		}
		mchain = mchain->next;
	}
	return (NULL);
}
