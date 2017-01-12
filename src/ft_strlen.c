/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:19:27 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:37:34 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
** This function is in dire need of an ASM implementation.
*/

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while(s[len])
		len++;
	return (len);
}
