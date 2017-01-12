/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 03:02:05 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/03 06:11:17 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include "ft_cmndef.h"

/*
** libft exclusive
*/

typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}		t_list;

void		ft_lstadd(t_list **alst, t_list *new);

void		ft_lstappend(t_list **alst, t_list *new);

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

t_list		*ft_lstnew(const void *content, size_t content_size);
#endif
