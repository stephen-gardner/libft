/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_sortone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 23:48:29 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/12 00:03:39 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Sorts mlink into a (presumably) sorted memchain and returns
** the memlink at its former position.
*/

t_memlink	*ft_mlink_sortone(t_memlink *mlink,
	int (*cmp)(const t_memlink *, const t_memlink *))
{
	t_memlink	**sorted;
	t_memlink	*next;

	sorted = &mlink->mchain->links;
	while (*sorted != mlink)
		sorted = &(*sorted)->next;
	*sorted = NULL;
	sorted = &mlink->mchain->links;
	while (*sorted && cmp(*sorted, mlink) <= 0)
		sorted = &(*sorted)->next;
	next = mlink->next;
	mlink->next = *sorted;
	*sorted = mlink;
	while (mlink->next)
		mlink = mlink->next;
	mlink->next = next;
	return (mlink);
}
