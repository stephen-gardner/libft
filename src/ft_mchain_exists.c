/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mchain_exists.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 17:04:35 by sgardner          #+#    #+#             */
/*   Updated: 2017/01/14 20:45:05 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memmgr.h"

/*
** CUSTOM:
** Returns TRUE/FALSE regarding the existence of the memchain
**  specified by label.
*/

t_bool	ft_mchain_exists(const char *label)
{
	return (ft_mchain_get(label, FALSE) != NULL);
}
