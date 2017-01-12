/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:14:26 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:01:49 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
** ASSIGNMENT:
** Allocates (with malloc(3)) and returns a "fresh" memory
** area. The memory allocated is initialized to 0. If the alloca-
** tion fails, the function returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if ((mem = malloc(size)))
		ft_memset(mem, '\0', size);
	return (mem);
}
