/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:12:11 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/08 09:26:27 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/*
** ASSIGNMENT:
** Re-code similarly named libc function.
*/

t_bool	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
