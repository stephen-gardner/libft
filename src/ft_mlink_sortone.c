/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_sortone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 23:48:29 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:35:53 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Sorts mlink into its (presumably) sorted memchain and returns
**  the next memlink.
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
	return ((mlink->next = next));
}
