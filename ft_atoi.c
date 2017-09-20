/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 10:04:11 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 18:57:45 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_std.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
*/

int	ft_atoi(const char *s)
{
	int	n;
	int	sign;

	while (ft_isspace(*s))
		s++;
	sign = (*s == '-') ? -1 : 1;
	if (*s == '-' || *s == '+')
		s++;
	n = 0;
	while (ft_isdigit(*s))
		n = (n * 10) + ((*s++ - '0') * sign);
	return (n);
}
