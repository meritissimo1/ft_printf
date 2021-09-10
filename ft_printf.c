/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr < marcrodr@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:03:29 by marcrodr          #+#    #+#             */
/*   Updated: 2021/09/10 17:44:46 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_percent(char *str, va_list args, int *count)
{
	int	i;

	i = *count;
	if (*str == '%')
		i += write(1, "%", 1);
	if (*str == 'c')
		i += ft_print_c(str, va_arg(args, int));
	else if (*str == 's')
		i += ft_print_s(str, va_arg(args, char *));
	else if (*str == 'd' || *str == 'i' || *str == 'u')
		i += ft_print_d(str, va_arg(args, int));
	else if (*str == 'p' || *str == 'x' || *str == 'X')
		i += ft_print_x(str, va_arg(args, unsigned long int));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str != '%')
		{
			write(1, str, 1);
			count++;
		}
		else
		{
			count = convert_percent((char *)++str, args, &count);
		}
		str++;
	}
	va_end(args);
	return (count);
}
