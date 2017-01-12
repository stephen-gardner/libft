/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 10:59:50 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/23 04:54:07 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"

/*
** CUSTOM:
** Transforms every letter of every word to uppercase and returns
** str.
*/

char	*ft_strupcase(char *str)
{
	size_t	i;

	i = 0;
	while ((str[i] = (char)ft_toupper(str[i])))
		i++;
	return (str);
}
