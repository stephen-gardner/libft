/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:16:09 by sgardner          #+#    #+#             */
/*   Updated: 2016/12/22 17:12:29 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_std.h"

/*
** ASSIGNMENT:
** Outputs the string s to the standard output.
*/

void	ft_putstr(const char *s)
{
	ft_putstr_fd(s, 1);
}
