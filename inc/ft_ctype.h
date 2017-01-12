/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:11:48 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/08 09:34:46 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H
# include "ft_cmndef.h"

/*
** Reproduction of <ctype.h>
*/

t_bool	ft_isalnum(int c);

t_bool	ft_isalpha(int c);

t_bool	ft_isascii(int c);

t_bool	ft_isblank(int c);

t_bool	ft_iscntrl(int c);

t_bool	ft_isdigit(int c);

t_bool	ft_isgraph(int c);

t_bool	ft_islower(int c);

t_bool	ft_isprint(int c);

t_bool	ft_ispunct(int c);

t_bool	ft_isspace(int c);

t_bool	ft_isupper(int c);

t_bool	ft_isxdigit(int c);

int	ft_toascii(int c);

int	ft_tolower(int c);

int	ft_toupper(int c);
#endif
