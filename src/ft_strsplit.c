/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:36:54 by sgardner          #+#    #+#             */
/*   Updated: 2018/10/09 23:33:38 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	build_array(const char *s, char **arr, char *copy, char delim)
{
	while (*s)
	{
		while (*s == delim)
			++s;
		if (!*s)
			break ;
		*arr++ = copy;
		while (*s && *s != delim)
			*copy++ = *s++;
		if (*s == delim)
			*copy++ = '\0';
	}
	*arr = NULL;
	*copy = '\0';
}

static void	calc_size(const char *s, size_t *len, size_t *words, char delim)
{
	while (*s)
	{
		while (*s == delim)
			++s;
		if (*s)
			++(*words);
		while (*s && *s != delim)
		{
			++(*len);
			++s;
		}
		if (*s == delim)
			++(*len);
	}
}

char		**ft_strsplit(const char *s, char delim)
{
	char	*res;
	size_t	len;
	size_t	words;
	size_t	arr_size;

	len = 0;
	words = 0;
	calc_size(s, &len, &words, delim);
	arr_size = sizeof(char *) * (words + 1);
	if (!(res = malloc(arr_size + len + 1)))
		return (NULL);
	build_array(s, (char **)res, res + arr_size, delim);
	return ((char **)res);
}
