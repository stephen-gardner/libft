/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 11:19:01 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:57:05 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"

/*
** CUSTOM:
** Transforms every letter of every word to lowercase and
**  returns str.
*/

char	*ft_strlowcase(char *str)
{
	size_t	i;

	i = 0;
	while ((str[i] = (char)ft_tolower(str[i])))
		i++;
	return (str);
}
