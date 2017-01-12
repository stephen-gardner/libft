/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 07:46:23 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:13:11 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_std.h"

/*
** ASSIGNMENT:
** Outputs the integer n to the standard output.
*/

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
}
