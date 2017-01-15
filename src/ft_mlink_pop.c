/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:52:06 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:14:24 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"

/*
** CUSTOM:
** Frees the first memlink in the memchain specified by label,
**  and the memory area to which it points.
** Sets the head of the memchain to the next link and returns
**  it; if the next link is NULL, the memchain is also freed and
**  NULL is returned.
** If the specified memchain is empty or nonexistent, the
**  behavior is undefined.
*/

t_memlink	*ft_mlink_pop(const char *label)
{
	t_memlink	**head;
	t_memlink	*next;

	head = &ft_mchain_get(label, FALSE)->links;
	next = (*head)->next;
	free((*head)->content);
	free(*head);
	return ((*head = next) ? next : (void *)ft_mlink_popall(label));
}
