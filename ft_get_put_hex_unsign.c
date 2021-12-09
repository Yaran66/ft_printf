/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:55:50 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/09 20:01:31 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_get_put_hex_unsign(unsigned long n)
{
	size_t	len;

	len = 0;
	if (n >= 16)
		len = ft_get_put_hex_x (n / 16);
	len++;
	if ((n % 16) < 10)
		ft_putchar ((char)('0' + (n % 16)));
	if ((n % 16) > 9 && (n % 16) < 16)
		ft_putchar ((char)('W' + (n % 16)));
	return (len);
}
