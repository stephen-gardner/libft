/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:14:35 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 16:08:23 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
*/

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	const char	*src;
	char		*dst;
	t_byte		b;
	size_t		i;

	src = (const char *)s2;
	dst = (char *)s1;
	b = (t_byte)c;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == b)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
