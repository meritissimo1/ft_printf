/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullitoa_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr < marcrodr@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:54:40 by marcrodr          #+#    #+#             */
/*   Updated: 2021/09/10 12:27:09 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ullitoa_base(unsigned long long int n, char *base)
{
	unsigned long long int	number;
	char					*a;
	int						base_len;
	int						size;

	base_len = ft_strlen(base);
	number = n;
	size = 1;
	n /= base_len;
	while(n && size++)
		n /= base_len;
	a = (char *)malloc(size + 1);
	if(!a)
		return(0);
	a[size--] = '\0';
	while(number > 0)
	{
		a[size--] = base[number % base_len];
		number /= base_len;
	}
	if (size == 0 && a[1] == '\0')
		a[0] = '0';
	return (a);
}
