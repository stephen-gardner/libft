/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 18:27:46 by sgardner          #+#    #+#             */
/*   Updated: 2017/09/20 10:02:56 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include "ft_string.h"

/*
** BONUS ASSIGNMENT:
** Allocates (with malloc(3)) and returns a "fresh" link.
** The variables content and content_size of the new link are
**  initialized by copy of the parameters of the function.
** If the parameter content is NULL, the variable content is
**  initialized to NULL and the variable content_size is
**  initialized to 0 even if the parameter content_size isn't.
** The variable next is initialized to NULL.
** If the allocation fails, the function returns NULL.
*/

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*lst;

	if (!(lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(lst->content = malloc(content_size)))
		{
			free(lst);
			return (NULL);
		}
		ft_memcpy(lst->content, content, content_size);
		lst->content_size = content_size;
	}
	else
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	lst->next = NULL;
	return (lst);
}
