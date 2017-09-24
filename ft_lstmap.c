/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 02:10:53 by sgardner          #+#    #+#             */
/*   Updated: 2017/09/20 09:57:07 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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
	t_list	*new_head;
	t_list	*current;

	if (!lst || !(new_head = f(lst)))
		return (NULL);
	current = new_head;
	while ((lst = lst->next))
	{
		if (!(current->next = f(lst)))
		{
			ft_lstdel(&new_head, &del_content);
			return (NULL);
		}
		current = current->next;
	}
	return (new_head);
}
