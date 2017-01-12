/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_transfer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:31:59 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/11 00:49:31 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Transfers mlink to the end of the memchain specified by
** label, generating it if necessary. Returns the next link in
** the source memchain, or NULL if the allocation fails. If the
** source memchain is empty after transfer, it is freed and NULL
** is returned.
*/

t_memlink	*ft_mlink_transfer(t_memlink *mlink, const char *label)
{
	t_memchain	*src;
	t_memchain	*dst;
	t_memlink	**current;
	t_memlink	*next;

	if (!(dst = ft_mchain_get(label, TRUE)))
		return (NULL);
	src = mlink->mchain;
	current = &src->links;
	while (*current != mlink)
		current = &(*current)->next;
	next = (*current)->next;
	*current = next;
	current = &dst->links;
	while (*current)
		current = &(*current)->next;
	*current = mlink;
	mlink->mchain = dst;
	mlink->next = NULL;
	if (!src->links)
		ft_mlink_popall(src->label);
	return (next);
}
