/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_gethead.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:40:54 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 21:06:13 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Returns the head of the memchain specified by label, or NULL
**  if the memchain does not exist.
*/

t_memlink	*ft_mlink_gethead(const char *label)
{
	t_memchain	*mchain;

	mchain = ft_mchain_get(label, FALSE);
	return ((mchain) ? mchain->links : NULL);
}
