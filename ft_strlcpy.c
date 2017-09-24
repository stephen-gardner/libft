/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 16:02:40 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:56:15 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** CUSTOM:
** Re-production of similarly named libc function.
** This function lacks optimizations such as word copying and
**  vectorization.
*/

size_t	ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (n)
	{
		n--;
		while (len < n && s2[len])
		{
			s1[len] = s2[len];
			len++;
		}
		s1[len] = '\0';
	}
	if (s2[len])
		len += ft_strlen(s2 + len);
	return (len);
}
