/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dislay_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:03:36 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/08 17:24:01 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_display_u(va_list ap)
{
	long i;

	i = va_arg(ap, int);
	if (i < 0)
		i = 4294967296 + i;
	ft_putnbr(i);
	return (ft_numlen(i));
}

//int main()
//{
//	long i;
//
//	i = 4294967295;
//	printf("%d", (printf("%u", i)));
//	printf("%d", (ft_printf("%u", 4294967295)));
//	return(0);
//}