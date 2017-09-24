/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:18:12 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:53:03 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ASSIGNMENT:
** Lexicographical comparison between s1 and s2.
** If the 2 strings are identical the function returns 1, or 0
**  otherwise.
*/

int	ft_strequ(const char *s1, const char *s2)
{
	return (ft_strcmp(s1, s2) == 0);
}
