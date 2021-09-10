/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr < marcrodr@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:42:31 by marcrodr          #+#    #+#             */
/*   Updated: 2021/09/10 12:49:36 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

# define DECIMAL	"0123456789"
# define HEXALOWER	"0123456789abcdef"
# define HEXAUPPER	"0123456789ABCDEF"

int			ft_printf(const char *str, ...);

int			ft_print_c(char *str, int arg);    
int			ft_print_s(char *str, char *arg);
int			ft_print_d(char *str, int arg);
int			ft_print_x(char *str, unsigned long int arg);

void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t nitems, size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		*ft_memset (void *s, int c, size_t n);

char		*ft_ullitoa_base(unsigned long long int n, char *base);
char		*ft_strdup(const char *s1);
char		*ft_itoa(int n);

size_t		ft_strlen(const char *str);

#endif 