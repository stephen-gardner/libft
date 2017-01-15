/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_popall.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:49:45 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:21:29 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"
#include "ft_string.h"

/*
** CUSTOM:
** Frees all memlinks and associated memory areas in the
**  memchain specified by label, before freeing the memchain
**  itself.
** Preserves the links between memchains.
** Returns the number of memlinks freed; if the memchain doesn't
**  exist, returns 0.
*/

size_t	ft_mlink_popall(const char *label)
{
	t_memchain	**mchain;
	t_memchain	*next;
	t_memlink	*mlink;
	size_t		count;

	mchain = ft_mchain_gethead();
	while (*mchain && ft_strcmp((*mchain)->label, label))
		mchain = &(*mchain)->next;
	if (!*mchain)
		return (0);
	count = 0;
	while ((mlink = (*mchain)->links))
	{
		(*mchain)->links = mlink->next;
		free(mlink->content);
		free(mlink);
		count++;
	}
	next = (*mchain)->next;
	free(*mchain);
	*mchain = next;
	return (count);
}
