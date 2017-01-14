/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_mlink.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 04:37:34 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 02:09:11 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"
#include "ft_string.h"

static t_bool	add_word(const char *label, const char *s, size_t word_len)
{
	char		*word;

	if ((word = ft_strsub(s, 0, word_len)))
	{
		if (ft_mlink_add(label, word, word_len + 1))
			return (TRUE);
		free(word);
	}
	return (FALSE);
}

static size_t	get_word_len(const char *s, char c)
{
	size_t	word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	return (word_len);
}

/*
** CUSTOM:
** Same behavior as ft_strsplit, but stores references to words
**  in the memchain specified by label, rather than an array.
** Generates the memchain if needed; and frees it if it's still
**  empty at the end of the operation, returning NULL.
** Returns the memlink of the first word, or NULL if no words
**  were found.
*/

t_memlink	*ft_strsplit_mlink(const char *label, const char *s, char c)
{
	t_memchain	*mchain;
	t_memlink	**head;
	size_t		word_len;

	mchain = ft_mchain_get(label, TRUE);
	head = &mchain->links;
	while (*head)
		head = &(*head)->next;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!(word_len = get_word_len(s, c)))
			break ;
		if(!add_word(label, s, word_len))
		{
			while (*head)
				*head = ft_mlink_del(*head);
			break ;
		}
		s += word_len;
	}
	if (!mchain->links)
		return ((void *)ft_mlink_popall(mchain->label));
	return (*head);
}
