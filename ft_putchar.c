/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:15:40 by sgardner          #+#    #+#             */
/*   Updated: 2017/09/23 16:54:06 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ASSIGNMENT:
** Output the character c to the standard output.
** This function has been adapted from above spec.
*/

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}
