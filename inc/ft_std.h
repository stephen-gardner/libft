/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_std.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 09:52:16 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/03 06:11:52 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STD_H
# define FT_STD_H
# include "ft_cmndef.h"

/*
** Reproduction of <stdio.h>
*/

void	ft_putchar(int c);

/*
** Reproduction of <stdlib.h>
*/

int	ft_atoi(const char *str);

/*
** libft exclusive
*/

char	*ft_itoa(int n);

void	ft_putendl(const char *s);

void	ft_putendl_fd(const char *s, int fd);

void	ft_putchar_fd(int c, int fd);

void	ft_putnbr(int n);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr(const char *s);

void	ft_putstr_fd(const char *s, int fd);
#endif
