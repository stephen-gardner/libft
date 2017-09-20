/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 02:05:05 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:59:05 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
** This function lacks optimizations such as word copying and
**  vectorization.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*dst;
	size_t	i;

	dst = s1 + ft_strlen(s1);
	i = 0;
	while (i < n && s2[i])
	{
		dst[i] = s2[i];
		i++;
	}
	dst[i] = '\0';
	return (s1);
}
