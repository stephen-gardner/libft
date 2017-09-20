/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 23:39:13 by sgardner          #+#    #+#             */
/*   Updated: 2017/09/19 21:26:03 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static size_t	trim_dir(const char *s, size_t index, t_bool forward)
{
	while (s[index] == ' ' || s[index] == '\t' || s[index] == '\n')
		index = (forward) ? index + 1 : index - 1;
	return (index);
}

/*
** ASSIGNMENT:
** Allocates (with malloc(3)) and returns a copy of the string
**  given as argument without whitespaces at the beginning or at
**  the end of the string.
** Will be considered as whitespaces the following characters
**  ' ', '\n' and '\t'.
** If s has no whitespaces at the beginning or at the end, the
**  function returns a copy of s.
** If the allocation fails the function returns NULL.
*/

char			*ft_strtrim(const char *s)
{
	size_t	len;

	s += trim_dir(s, 0, TRUE);
	if ((len = ft_strlen(s)))
		len = trim_dir(s, len - 1, FALSE) + 1;
	return (ft_strsub(s, 0, len));
}
