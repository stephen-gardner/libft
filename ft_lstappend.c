/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 01:14:49 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/04 04:03:21 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** CUSTOM:
** Adds the element new to the end of the list.
*/

void	ft_lstappend(t_list **alst, t_list *new)
{
	while (*alst)
		alst = &(*alst)->next;
	*alst = new;
}
