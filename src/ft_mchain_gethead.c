/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mchain_gethead.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:15:15 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/09 15:17:29 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Returns a pointer to a static pointer to the memchain head.
*/

t_memchain	**ft_mchain_gethead(void)
{
	static t_memchain	*head;

	return (&head);
}
