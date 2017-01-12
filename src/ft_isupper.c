/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:14:03 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/08 09:28:39 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
** CUSTOM:
** Re-production of similarly named libc function.
** This function disregards locale.
*/

t_bool	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
