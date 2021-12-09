/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:34:17 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/07 11:43:42 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

//int main()
//{
//	char *line;
//
//	line = "Very nice snowy morniung";
//	ft_putstr(line);
//	return (0);
//}