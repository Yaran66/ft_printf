/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:06:34 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/09 12:34:13 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "ft_printf.h"

int ft_display(char format, va_list ap)
{
	if (format == 'c')
		return (ft_display_с(ap));
	if (format == 's')
		return (ft_display_str(ap));
	if (format == 'p')
		return (ft_display_ptr(ap));
	if (format == 'd' || format == 'i')
		return (ft_display_dig(ap));
	if (format == 'u')
		return (ft_display_u(ap));
	if (format == 'x')
	{
		if ((va_arg(ap, int)) < 0)
				return (ft_get_put_hex_x((4294967296 + va_arg(ap, int))));
		else return (ft_get_put_hex_x(va_arg(ap, int)));
	}
	if (format == 'X')
		return (ft_get_put_hex_XX(va_arg(ap, int)));
	if (format == '%')
	{
		ft_putchar('%');
		return (1);
	}

	return (0);
}
