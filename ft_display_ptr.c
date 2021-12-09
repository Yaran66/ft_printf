/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_ptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:39:12 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/08 16:35:58 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "ft_printf.h"

int ft_display_ptr(va_list ap)
{
	size_t ptr_arg;

	ptr_arg = (size_t)va_arg(ap, void *);
	ft_putstr("0x");
	return (2 + ft_get_put_hex_x(ptr_arg));
}
