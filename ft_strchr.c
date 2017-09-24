/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:17:17 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 21:24:49 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
*/

char	*ft_strchr(const char *s, int c)
{
	char	b;

	b = (char)c;
	while (*s && *s != b)
		s++;
	return ((*s == b) ? (char *)s : NULL);
}
