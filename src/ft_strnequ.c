/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:20:05 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:06:32 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Lexicographical comparison between s1 and s2 up to n char-
** acters or until a '\0' is reached. If the 2 strings are identical,
** the function returns 1, or 0 otherwise.
*/

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n) == 0);
}
