/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:14:55 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 18:10:05 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const t_byte	*b1;
	const t_byte	*b2;
	size_t		i;

	b1 = (const t_byte *)s1;
	b2 = (const t_byte *)s2;
	i = 0;
	while (i < n)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}
