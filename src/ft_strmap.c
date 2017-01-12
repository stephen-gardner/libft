/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 02:38:46 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:06:00 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
** ASSIGNMENT:
** Applies the function f to each character of the string given
** as argument to create a "fresh" new string (with malloc(3))
** resulting from the successive applications of f.
*/

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	if ((dup = (char *)malloc(len + 1)))
	{
		i = 0;
		while (i < len)
		{
			dup[i] = f(s[i]);
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
