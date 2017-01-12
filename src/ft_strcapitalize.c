/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 11:54:05 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/23 04:50:38 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"

/*
** CUSTOM:
** Capitalizes the first letter of each word and transforms all
** other letters to lowercase, returning str. A word is a string
** of alphanumeric characters.
*/

char	*ft_strcapitalize(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (ft_isalnum(str[i]))
		{
			str[i] = (char)ft_toupper(str[i]);
			i++;
			while (ft_isalnum(str[i]))
			{
				str[i] = (char)ft_tolower(str[i]);
				i++;
			}
		}
		else
			i++;
	}
	return  (str);
}
