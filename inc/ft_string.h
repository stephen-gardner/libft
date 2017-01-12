/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 01:22:52 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/03 06:09:22 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H
# include "ft_cmndef.h"

/*
** Reproduction of <string.h>
*/

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *s1, const void *s2, size_t n);

void	*ft_memmove(void *s1, const void *s2, size_t n);

void	*ft_memset(void *s, int c, size_t n);

char	*ft_stpcpy(char *s1, const char *s2);

char	*ft_stpncpy(char *s1, const char *s2, size_t n);

char	*ft_strcat(char *s1, const char *s2);

char	*ft_strchr(const char *s, int c);

int	ft_strcmp(const char *s1, const char *s2);

char	*ft_strcpy(char *s1, const char *s2);

char	*ft_strdup(const char *s);

size_t	ft_strlen(const char *s);

char	*ft_strncat(char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strncpy(char *s1, const char *s2, size_t n);

char	*ft_strndup(const char *s, size_t size);

size_t	ft_strnlen(const char *s, size_t maxlen);

char	*ft_strrchr(const char *s, int c);

char	*ft_strstr(const char *s1, const char *s2);

/*
** POSIX LEGACY
*/

void	ft_bzero(void *s, size_t n);

/*
** BSD
*/

size_t	ft_strlcat(char *s1, const char *s2, size_t n);

size_t	ft_strlcpy(char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

/*
** libft exclusive
*/

void	*ft_memalloc(size_t size);

void	ft_memdel(void **ap);

char	*ft_strcapitalize(char *str);

void	ft_strclr(char *s);

void	ft_strdel(char **as);

int	ft_strequ(const char *s1, const char *s2);

void	ft_striter(char *s, void (*f)(char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strlowcase(char *str);

char	*ft_strmap(const char *s, char (*f)(char));

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

int	ft_strnequ(const char *s1, const char *s2, size_t n);

char	*ft_strnew(size_t size);

char	**ft_strsplit(const char *s, char c);

char	*ft_strsub(const char *s, unsigned int start, size_t len);

char	*ft_strtrim(const char *s);

char	*ft_strupcase(char *str);
#endif
