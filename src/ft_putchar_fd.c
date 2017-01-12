/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:15:46 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/10 11:06:50 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_std.h"

/*
** ASSIGNMENT:
** Outputs the char c to the file descriptor fd.
** This function has been adapted from above spec.
*/

void	ft_putchar_fd(int c, int fd)
{
	t_byte	b;

	b = (t_byte)c;
	write(fd, &b, 1);
}
