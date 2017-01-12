/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:14:35 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/10 08:36:27 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
*/

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	const t_byte	*src;
	t_byte		*dst;
	t_byte		b;
	size_t		i;

	src = (const t_byte *)s2;
	dst = (t_byte *)s1;
	b = (t_byte)c;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == b)
			return (dst + i);
		i++;
	}
	return (NULL);
}
