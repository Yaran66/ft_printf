/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:17:17 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/07 11:32:13 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s != 0)
	{
		i++;
		s++;
	}
	return (i);
}

//int main()
//{
//	char *s;
//
//	s = " Very good morning";
//	printf("%d", (ft_strlen(s)));
//	return (0);
//}
