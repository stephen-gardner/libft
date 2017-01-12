/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 19:11:14 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:07:02 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
** ASSIGNMENT:
** Allocates (with malloc(3)) and returns a "fresh" string end-
** ing with '\0', result of the concatenation of s1 and s2. If
** the allocation fails the function returns NULL.
*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;

	if ((res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		ft_stpcpy(ft_stpcpy(res, s1), s2);
	return (res);
}
