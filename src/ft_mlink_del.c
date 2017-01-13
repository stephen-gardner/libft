/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_del.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:56:30 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/13 03:34:02 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"

/*
** CUSTOM:
** Frees the memory area to which the content of mlink points.
** Removes mlink with ft_mlink_remove, and returns the next
**  memlink in the memchain.
*/

t_memlink	*ft_mlink_del(t_memlink *mlink)
{
	free(mlink->content);
	return (ft_mlink_remove(mlink));
}
