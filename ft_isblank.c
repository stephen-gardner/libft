/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:12:31 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/08 09:26:51 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** CUSTOM:
** Re-production of similarly named libc function.
** This function disregards locale.
*/

t_bool	ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}
