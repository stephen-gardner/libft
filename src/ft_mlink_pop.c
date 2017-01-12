/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:52:06 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/09 13:03:48 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"

/*
** CUSTOM:
** Frees the first memlink in the memchain specified by label,
** and the memory area to which it points. Sets the head of the
** memchain to the next link and returns it. If the next link is
** NULL, the memchain is also freed and NULL is returned.
*/

t_memlink	*ft_mlink_pop(const char *label)
{
	t_memlink	**head;
	t_memlink	*next;

	head = &ft_mchain_get(label, FALSE)->links;
	if (!(next = (*head)->next))
	{
		ft_mlink_popall(label);
		return (NULL);
	}
	free((*head)->content);
	free(*head);
	return ((*head = next));
}
