/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:19:36 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 18:26:20 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const t_byte	*b1;
	const t_byte	*b2;
	size_t		i;

	b1 = (const t_byte *)s1;
	b2 = (const t_byte *)s2;
	i = 0;
	while (i < n && b1[i])
	{
		if (b1[i] != b2[i])
			break ;
		i++;
	}
	if (i == n)
		i--;
	return (b1[i] - b2[i]);
}
