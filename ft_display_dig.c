/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_dig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:38:18 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/09 11:55:25 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "ft_printf.h"

int	ft_display_dig(va_list ap)
{
	long i;

	i = va_arg(ap, int);
	ft_putnbr(i);
	return (ft_numlen(i));
}

