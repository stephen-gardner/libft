/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlink_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 22:38:52 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/11 00:47:14 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

static t_memlink	*merge(t_memlink *m1, t_memlink *m2, int (*cmp)())
{
	t_memlink	*res;

	if (!m1)
		return (m2);
	if (!m2)
		return (m1);
	if (cmp(m1, m2) <= 0)
	{
		res = m1;
		res->next = merge(m1->next, m2, cmp);
	}
	else
	{
		res = m2;
		res->next = merge(m1, m2->next, cmp);
	}
	return (res);
}

static t_memlink	*split(t_memlink *head, int (*cmp)())
{
	t_memlink	*tmp;
	t_memlink	*mid;

	if (!head || !head->next)
		return (head);
	tmp = head;
	mid = head->next;
	while (mid && mid->next)
	{
		tmp = tmp->next;
		mid = mid->next->next;
	}
	mid = tmp->next;
	tmp->next = NULL;
	head = split(head, cmp);
	mid = split(mid, cmp);
	return (merge(head, mid, cmp));
}

/*
** CUSTOM:
** Sorts the memchain, specified by label, by comparing links
** with cmp (expected return values of cmp should be similar to
** memcmp) and returns the head of the memchain. Returns NULL if
** the mechain does not exist.
**
** ALGORITHM: Merge Sort
** TO-DO: Re-implement without recursion...
*/

t_memlink		*ft_mlink_sort(const char *label,
	int (*cmp)(const t_memlink *, const t_memlink *))
{
	t_memchain	*mchain;

	if (!(mchain = ft_mchain_get(label, FALSE)))
		return (NULL);
	mchain->links = split(mchain->links, cmp);
	return (mchain->links);
}

/*
** ALGORITHM: Chen Sorting Algorithm
**
** static t_memlink	*insert(t_memlink *current, int (*cmp)())
** {
**	t_memlink	**sorted;
**	t_memlink	*next;
**
**	sorted = &current->mchain->links;
**	while (*sorted && cmp(*sorted, current) <= 0)
**		sorted = &(*sorted)->next;
**	next = current->next;
**	current->next = *sorted;
**	*sorted = current;
**	while (current->next)
**		current = current->next;
**	current->next = next;
**	return (current);
** }
**
** t_memlink		*ft_mlink_sort(const char *label,
**	int (*cmp)(const t_memlink *, const t_memlink *))
** {
**	t_memchain	*mchain;
**	t_memlink	*sorted;
**	t_memlink	*next;
**
**	if (!(mchain = ft_mchain_get(label, FALSE)))
**		return (NULL);
**	sorted = mchain->links;
**	while (sorted->next)
**	{
**		while (sorted->next && cmp(sorted, sorted->next) <= 0)
**			sorted = sorted->next;
**		if (!(next = sorted->next))
**			break ;
**		sorted->next = NULL;
**		sorted = insert(next, cmp);
**	}
**	return (mchain->links);
** }
*/
