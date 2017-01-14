/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 04:38:11 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 02:24:39 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_memmgr.h"
#include "ft_string.h"

/*
** ASSIGNMENT:
** Allocates (with malloc(3)) and returns an array of "fresh"
**  strings (all ending with '\0', including the array itself)
**  obtained by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL.
** Example: ft_strsplit("*hello*fellow***students*", '*')
**  returns the array ["hello", "fellow", "students"].
*/

char		**ft_strsplit(const char *s, char c)
{
	char		**array;
	t_memlink	*mlink;
	size_t		word_count;
	size_t		i;

	mlink = ft_strsplit_mlink("_ft_strsplit", s, c);
	word_count = ft_mlink_count(mlink);
	if (!(array = (char **)malloc(sizeof(*array) * (word_count + 1))))
	{
		while (mlink)
			mlink = ft_mlink_del(mlink);
		return (NULL);
	}
	i = 0;
	while (i < word_count)
	{
		array[i] = (char *)mlink->content;
		mlink = ft_mlink_remove(mlink);
		i++;
	}
	array[i] = NULL;
	return (array);
}
