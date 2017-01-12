/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:14:16 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/08 09:28:48 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
** CUSTOM:
** Re-production of similarly named libc function.
** This function disregards locale.
*/

t_bool	ft_isxdigit(int c)
{
	return (ft_isdigit(c)
		|| (c >= 'A' && c <= 'F')
		|| (c >= 'a' && c <= 'f'));
}
