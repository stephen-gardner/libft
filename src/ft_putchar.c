/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:15:40 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:16:27 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_std.h"

/*
** ASSIGNMENT:
** Output the character c to the standard output.
** This function has been adapted from above spec.
*/

void	ft_putchar(int c)
{
	ft_putchar_fd(c, 1);
}
