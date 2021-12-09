/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_put_hex_XX.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:54:58 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/09 12:15:12 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_get_put_hex_XX(unsigned long n)
{
	size_t	len;

	len = 0;
//	if (n < 0)
//		n = n + 4294967296;
	if (n >= 16)
		len = ft_get_put_hex_XX (n / 16);
	len++;
	if ((n % 16) < 10)
		ft_putchar ((char)('0' + (n % 16)));
	if ((n % 16) > 9 && (n % 16) < 16)
		ft_putchar ((char)('7' + (n % 16)));
	return (len);
}
