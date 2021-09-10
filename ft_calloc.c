/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr < marcrodr@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:36:13 by user42            #+#    #+#             */
/*   Updated: 2021/09/10 12:22:28 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	total_size;
	void	*allocated;

	total_size = nitems * size;
	allocated = malloc(total_size);
	if (allocated == NULL)
		return (NULL);
	ft_bzero(allocated, total_size);
	return (allocated);
}
