/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr < marcrodr@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:03:29 by marcrodr          #+#    #+#             */
/*   Updated: 2021/09/01 17:52:39 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int a_pensar_percent(const char *str, va_list args)
{
	int a;
	
	if(*str == 'd' || *str == 'i')
		ft_putnbr_fd (va_arg(args, int), 1);
	else if (*str == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (*str == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (*str == 'p')
		
	
		
	
		

return(0);
}


int ft_printf(const char *str,  ...)
{
	va_list args;
	int i;

	i = 0;
	va_start(args, str);

	while(*str != '\0')
	{
		if(*str != '%')
		{
			write(1, str, 1);
		}
		else
		{
			a_pensar_percent(++str, args);			
		}
		str++;
	} 
	va_end(args);
return(0);
}

int main()
{
	char test[] = "opa";
	ft_printf("testando ft_printf %i %c %c\n" , 1, 69, test);
	return (0);
}