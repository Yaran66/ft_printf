/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:25:29 by wjasmine          #+#    #+#             */
/*   Updated: 2021/12/09 11:47:10 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printf(const char * format, ...)
{
	int	length;
	va_list ap;

	length = 0;
	va_start(ap,format);
	while(*format)
	{
		if (*format == '%')
		{
			//format++;
			length =  length + ft_display(*(++format), ap);
		}
		else
		{
			ft_putchar(*format);
			length++;
		}
		format++;
	}
	va_end(ap);
	return(length);
}

//int main()
//{
//	char	c;
//	char	*line;
//	int		i;
//	unsigned int	t;
//
//	t = 4294967295;
//	i = -2147483648;
//	c = 'k';
////	line = NULL;
//	line = "Perfect, done!";
//	//cspdiuxX%
////	ft_printf("mine %c\n", c);
////	printf("orig %c\n", c);
////	printf("original char %c %u\n", 256, (unsigned char)256);
//	ft_printf("mine %d\n", i);
//	printf("orig %d\n", i);
////	ft_printf("my %s\n", line);
////	printf("original string %s\n", line);
////	printf("mine %d\n", (ft_printf("mine %s%c%d\n", line, c, i)));
////	printf("orig %d\n", (printf("orig %s%c%d\n", line, c, i)));
////	printf("mine pointer %p\n", &line);
////	printf("orig pointer %p\n", &line);
////	printf("%d\n", (printf("%u\n", i)));
////	printf("%d", (ft_printf("%u\n", i)));
//	//
//	// printf("%X\n", 1000000);
////	printf("%x %X \n", 31, 31);
////	ft_printf("%X\n", 1000000);
////	ft_printf("%x %X \n", 31, 31);
////	printf("orig %d\n", printf("%x\n", 1000000));
////	printf("%x\n", 31);
////	printf("mine %d", ft_printf("%x\n", 1000000));
////	ft_printf("%x\n", 31);
////
////
////		ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
////		printf("\n");
////		printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
//////		//printf("len %d\n", printf("%p\n", p));
//		return (0);
//}
