/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:48:14 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/11 00:29:42 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"

/*
** CUSTOM:
** Allocates and returns a fresh memory area. Creates a new mem-
** link containing a pointer to the newly allocated space and
** its size, which is added to the end of the memchain specfied
** by label. The memchain is generated if it does not exist. If
** the allocation fails, the function returns NULL.
*/

void	*ft_mlink_alloc(const char *label, size_t size)
{
	void		*mem;

	if ((mem = malloc(size)))
	{
		if (ft_mlink_add(label, mem, size))
			return (mem);
		free(mem);
	}
	return (NULL);
}
