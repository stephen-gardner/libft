/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 13:22:10 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 21:04:45 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Returns the length of the memchain associated with mlink,
**  starting from mlink.
*/

size_t	ft_mlink_count(t_memlink *mlink)
{
	size_t		count;

	count = 0;
	while (mlink)
	{
		count++;
		mlink = mlink->next;
	}
	return (count);
}
