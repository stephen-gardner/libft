/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:56:30 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/09 12:46:24 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"

/*
** CUSTOM:
** Frees mlink and the memory area to which it points. Removes
** mlink from its associated memchain, while preserving the
** links between memlinks. Returns the next memlink in the
** memchain; if the memchain is empty after deletion, the mem-
** chain is also freed and NULL is returned.
*/

t_memlink	*ft_mlink_del(t_memlink *mlink)
{
	t_memchain	*mchain;
	t_memlink	**current;

	mchain = mlink->mchain;
	current = &mchain->links;
	while (*current != mlink)
		current = &(*current)->next;
	*current = (*current)->next;
	free(mlink->content);
	free(mlink);
	if (!mchain->links)
		ft_mlink_popall(mchain->label);
	return (*current);
}
