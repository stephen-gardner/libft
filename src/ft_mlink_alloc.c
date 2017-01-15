/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:48:14 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 21:03:48 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"

/*
** CUSTOM:
** Allocates and returns a fresh memory area.
** Creates a new memlink entry in the memchain specified by
**  label by passing the freshly allocated memory's pointer and
**  size to ft_mlink_add.
** If the allocation fails, the function returns NULL.
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
