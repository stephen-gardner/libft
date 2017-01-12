/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:13:48 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/08 09:28:08 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
** CUSTOM:
** Re-production of similarly named libc function.
** This function disregards locale.
*/

t_bool	ft_ispunct(int c)
{
	return (ft_isprint(c) && !ft_isalnum(c) && c != ' ');
}
