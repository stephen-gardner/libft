/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:16:16 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:16:55 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_std.h"
#include "ft_string.h"

/*
** ASSIGNMENT:
** Outputs the string s to the file descriptor fd.
*/

void	ft_putstr_fd(const char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
