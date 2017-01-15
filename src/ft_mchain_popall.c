/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mchain_popall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 19:50:36 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 20:49:23 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Frees ALL memlinks and associated memory areas. Returns the
**  number of memlinks freed.
*/

size_t	ft_mchain_popall(void)
{
	t_memchain	**head;
	size_t		count;

	count = 0;
	while(*(head = ft_mchain_gethead()))
		count += ft_mlink_popall((*head)->label);
	return (count);
}
