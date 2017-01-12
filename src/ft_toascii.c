/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:23:30 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 21:13:13 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
** CUSTOM:
** Re-production of similarly named libc function.
*/

int	ft_toascii(int c)
{
	return (c & 0x7F);
}
