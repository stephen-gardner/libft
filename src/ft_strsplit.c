/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 04:38:11 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/02 07:22:25 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

static size_t	get_word_len(const char *s, char c)
{
	size_t	word_len;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	return (word_len);
}

static size_t	get_word_count(const char *s, char c)
{
	size_t	word_count;
	size_t	word_len;

	word_count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if ((word_len = get_word_len(s, c)))
		{
			word_count++;
			s += word_len;
		}
	}
	return (word_count);
}

static void	destroy_array(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}

/*
** ASSIGNMENT:
** Allocates (with malloc(3)) and returns an array of "fresh"
** strings (all ending with '\0', including the array itself) ob-
** tained by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL. Example
** : ft_strsplit("*hello*fellow***students*", '*') re-
** turns the array ["hello", "fellow", "students"].
*/

char		**ft_strsplit(const char *s, char c)
{
	char	**array;
	size_t	word_count;
	size_t	word_len;
	size_t	i;

	word_count = get_word_count(s, c);
	if(!(array = (char **)malloc(sizeof(*array) * (word_count + 1))))
		return (NULL);
	array[word_count] = '\0';
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		word_len = get_word_len(s, c);
		if(!(array[i] = ft_strsub(s, 0, word_len)))
		{
			destroy_array(array);
			return (NULL);
		}
		s += word_len;
		i++;
	}
	return (array);
}
