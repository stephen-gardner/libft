/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_poplast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:53:45 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/09 13:03:34 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"

/*
** CUSTOM:
** Frees the last memlink in the memchain specified by label,
** and the memory area to which it points. Returns the preceding
** memlink after setting its variable next to NULL. If the freed
** link is the head of the memchain, the memchain is also freed
** and NULL is returned.
*/

t_memlink	*ft_mlink_poplast(const char *label)
{
	t_memlink	*current;

	current = ft_mchain_get(label, FALSE)->links;
	if (!current->next)
	{
		ft_mlink_popall(label);
		return (NULL);
	}
	while (current->next->next)
		current = current->next;
	free(current->next->content);
	free(current->next);
	current->next = NULL;
	return (current);
}
