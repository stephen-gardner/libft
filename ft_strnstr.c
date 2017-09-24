/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 07:54:57 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 18:25:30 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
** This function currently uses an inefficient search method.
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!*s2)
		return ((char *)s1);
	while (n && *s1)
	{
		i = 0;
		while (i < n && s1[i])
		{
			if (s1[i] != s2[i])
				break ;
			i++;
		}
		if (!s2[i])
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
