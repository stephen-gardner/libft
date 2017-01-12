/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmndef.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:06:16 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/04 21:32:17 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CMNDEF_H
# define FT_CMNDEF_H
# include <string.h>

/*
** Fugly hack to suppress unused variable warning
*/

# define UNUSED(x) (void)(x)
# define FALSE 0
# define TRUE !FALSE

typedef int		t_bool;
typedef unsigned char	t_byte;
#endif
