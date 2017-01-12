/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:17:06 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/10 11:09:21 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	ft_stpcpy(s1 + ft_strlen(s1), s2);
	return (s1);
}
