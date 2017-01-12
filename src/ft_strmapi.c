/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 03:10:37 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:06:09 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
** ASSIGNMENT:
** Applies the function f to each character of the string passed
** as argument by giving its index as first argument to create a
** "fresh" new string (with malloc(3)) resulting from the suc-
** cessive applications of f.
*/

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char		*dup;
	size_t		len;
	unsigned int	i;

	len = ft_strlen(s);
	if ((dup = (char *)malloc(len + 1)))
	{
		i = 0;
		while (i < len)
		{
			dup[i] = f(i, s[i]);
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
