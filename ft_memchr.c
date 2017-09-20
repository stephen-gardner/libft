/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:14:46 by sgardner          #+#    #+#             */
/*   Updated: 2017/09/19 21:17:28 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const t_byte	*src;
	t_byte			b;
	size_t			i;

	src = (const t_byte *)s;
	b = (t_byte)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == b)
			return ((void *)(src + i));
		i++;
	}
	return (NULL);
}
