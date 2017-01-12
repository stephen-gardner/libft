/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 09:46:20 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/11 00:27:36 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"

/*
** CUSTOM:
** Allocates and returns a new memlink, which is added to the
** end of the memchain specified by label. If the memchain does
** not exist, it is generated. The variables content and
** content_size are set to the function parameters mem and size;
** and next is set to NULL. If the allocation fails, the
** function returns NULL.
*/

t_memlink	*ft_mlink_add(const char *label, void *mem, size_t size)
{
	t_memchain	*mchain;
	t_memlink	*new_link;
	t_memlink	**current;

	if (!(new_link = (t_memlink *)malloc(sizeof(t_memlink))))
		return (NULL);
	if (!(mchain = ft_mchain_get(label, TRUE)))
	{
		free(new_link);
		return (NULL);
	}
	new_link->mchain = mchain;
	new_link->content = mem;
	new_link->content_size = size;
	new_link->next = NULL;
	current = &mchain->links;
	while (*current)
		current = &(*current)->next;
	return ((*current = new_link));
}
