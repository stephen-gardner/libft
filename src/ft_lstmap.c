/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 02:10:53 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 20:42:23 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

static void	del_content(void *content, size_t content_size)
{
	free(content);
	UNUSED(content_size);
}

/*
** BONUS ASSIGNMENT:
** Iterates a list lst and applies the function f to each link
**  to create a "fresh" list (using malloc(3)) resulting from
**  the successive applications of f.
** If the allocation fails, the function returns NULL.
*/

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*dup;
	t_list	*current;

	if (!lst)
		return (NULL);
	dup = f(lst);
	current = dup;
	while ((lst = lst->next))
	{
		if (!(current->next = f(lst)))
		{
			ft_lstdel(&dup, &del_content);
			return (NULL);
		}
		current = current->next;
	}
	return (dup);
}
