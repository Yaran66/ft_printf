/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:25:29 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/09 20:31:41 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		length;
	va_list	ap;

	length = 0;
	va_start (ap, format);
	while (*format)
	{
		if (*format == '%')
			length = length + ft_display(*(++format), ap);
		else
		{
			ft_putchar(*format);
			length++;
		}
		format++;
	}
	va_end(ap);
	return (length);
}
