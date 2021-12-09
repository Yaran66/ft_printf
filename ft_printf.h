/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:08:39 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/09 20:36:39 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_display_c(va_list ap);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
int		ft_display(char format, va_list ap);
int		ft_strlen(char *s);
int		ft_display_str(va_list ap);
void	ft_putstr(char *s);
int		ft_display_dig(va_list ap);
void	ft_putnbr(long i);
int		ft_numlen(long n);
int		ft_display_ptr(va_list ap);
int		ft_get_put_hex_unsign(unsigned long n);
int		ft_get_put_hex_x(long n);
int		ft_display_u(va_list ap);
int		ft_get_put_hex_xx(long n);

#endif
