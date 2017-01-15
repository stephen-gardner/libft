/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mchain_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:19:37 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 20:48:29 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"
#include "ft_string.h"

/*
** CUSTOM:
** Returns the memchain specified by label.
** If force_gen is TRUE, the memchain will be generated if it
**  doesn't exist, and added to the end of the memchain list.
** The struct variables links and next must point to NULL; and
**  label must point to the function parameter of the same name.
** If the allocation fails, the function returns NULL.
*/

t_memchain	*ft_mchain_get(const char *label, t_bool force_gen)
{
	t_memchain		**mchain;

	mchain = ft_mchain_gethead();
	while (*mchain)
	{
		if (ft_strcmp((*mchain)->label, label) == 0)
			return (*mchain);
		mchain = &(*mchain)->next;
	}
	if (!force_gen
		|| !(*mchain = (t_memchain *)malloc(sizeof(t_memchain))))
		return (NULL);
	(*mchain)->label = label;
	(*mchain)->links = NULL;
	(*mchain)->next = NULL;
	return (*mchain);
}
