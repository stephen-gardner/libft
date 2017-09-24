/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:17:51 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 22:52:25 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ASSIGNMENT:
** Takes as a parameter the address of a string that need to be
**  freed with free(3), then sets its pointer to NULL.
*/

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}
