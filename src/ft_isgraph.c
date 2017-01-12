/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:13:02 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/08 09:27:30 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
** CUSTOM:
** Re-production of similarly named libc function.
** This function disregards locale.
*/

t_bool	ft_isgraph(int c)
{
	return (c >= '!' && c <= '~');
}
