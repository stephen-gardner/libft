/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:19:11 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:54:21 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/*
** ASSIGNMENT:
** Applies the function f to each character of the string passed
**  as argument.
** Each character is passed by address to f to be modified if
**  necessary.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	while (*s)
		f(s++);
}
