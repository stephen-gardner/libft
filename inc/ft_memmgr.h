/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmgr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 08:02:11 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/11 00:29:01 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMMGR_H
# define FT_MEMMGR_H
# include "ft_cmndef.h"

/*
** Memory Manager exclusive to libft
**
** Design is a little wack because of norm restrictions (like no
** global variables), but it gets the job done without exposing
** useless internal functions.
**
** Requesting memory from (or checking memory into) the memory
** manager is a commitment--freeing it outside of the manager
** would be asking for trouble!
*/

typedef struct	s_memlink
{
	struct s_memchain	*mchain;
	void			*content;
	size_t			content_size;
	struct s_memlink	*next;
}		t_memlink;

typedef struct	s_memchain
{
	const char		*label;
	t_memlink		*links;
	struct s_memchain	*next;
}		t_memchain;

t_bool		ft_mchain_exists(const char *label);

t_memchain	*ft_mchain_get(const char *label, t_bool force_gen);

t_memchain	**ft_mchain_gethead(void);

size_t		ft_mchain_popall(void);

t_memlink	*ft_mlink_add(const char *label, void *mem, size_t size);

void		*ft_mlink_alloc(const char *label, size_t size);

size_t		ft_mlink_count(t_memlink *mlink);

t_memlink	*ft_mlink_del(t_memlink *mlink);

t_memlink	*ft_mlink_find(void *mem);

t_memlink	*ft_mlink_gethead(const char *label);

t_memlink	*ft_mlink_pop(const char *label);

size_t		ft_mlink_popall(const char *label);

t_memlink	*ft_mlink_poplast(const char *label);

t_memlink	*ft_mlink_rev(const char *label);

t_memlink	*ft_mlink_sort(const char *label,
	int (*cmp)(const t_memlink *, const t_memlink *));

t_memlink	*ft_mlink_transfer(t_memlink *mlink, const char *label);
#endif
