/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:01:24 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/03 16:59:09 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

/*int ft_printf(const char * format, ...)
{
	int	length;
	va_list ap;

	length = 0;
	va_start(ap,format);
	while(format)
	{
		if (*format == '%')
		{
			length =  length + ft_display(&(++format), ap)
		}
		else
		{
			ft_putchar(format);
			length++;
		}
		format++;
	}



	return(length);
}*/

int main()
{
	char	c;
	char	*line;

	c = 'k';
	line = "Perfect, done!";
	//cspdiuxX%
//	ft_printf("my %c", c);
	printf("original char %c %u\n", 256, (unsigned char)256);
//	ft_printf("my %s", line);
//	printf("original string %s\n", line);
//	printf("original pointer %p\n", &line);
	//
	// printf("%X\n", 1000000);
//	printf("%x %X \n", 31, 31);
//	ft_printf("%X\n", 1000000);
//	ft_printf("%x %X \n", 31, 31);


		ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
		printf("\n");
		printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
		//printf("len %d\n", printf("%p\n", p));
		return (0);
}
