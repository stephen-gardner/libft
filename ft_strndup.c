/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:19:55 by sgardner          #+#    #+#             */
/*   Updated: 2017/09/20 14:06:06 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

/*
** CUSTOM:
** Re-production of similarly named libc function.
*/

char	*ft_strndup(const char *s, size_t size)
{
	char	*dup;
	size_t	len;

	len = 0;
	while (len < size && s[len])
		len++;
	if ((dup = (char *)malloc(len + 1)))
	{
		ft_memcpy(dup, s, len);
		dup[len] = '\0';
	}
	return (dup);
}