/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_rev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 11:48:37 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/11 00:46:28 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM: Reverses the order of the memchain and returns the
** head. Returns NULL if the memchain does not exist.
*/

t_memlink	*ft_mlink_rev(const char *label)
{
	t_memlink	*current;
	t_memlink	*prev;
	t_memlink	*next;

	if (!(current = ft_mlink_gethead(label)))
		return (NULL);
	prev = NULL;
	while (TRUE)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		if (!next)
			break ;
		current = next;
	}
	current->mchain->links = current;
	return (current);
}
