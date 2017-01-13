/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 03:07:53 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/13 04:09:23 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"

/*
** CUSTOM:
** Removes mlink from its associated memchain, while preserving
**  the links between memlinks, and frees it.
** If the memchain is empty after deletion, the memchain is also
**  freed and NULL is returned.
** Returns the next memlink in the memchain.
*/

t_memlink	*ft_mlink_remove(t_memlink *mlink)
{
	t_memchain	*mchain;
	t_memlink	**current;

	mchain = mlink->mchain;
	current = &mchain->links;
	if (!(*current)->next)
	{
		ft_mlink_popall(mchain->label);
		return (NULL);
	}
	while (*current != mlink)
		current = &(*current)->next;
	*current = (*current)->next;
	free(mlink);
	return (*current);
}