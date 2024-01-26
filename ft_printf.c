/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:04:22 by nleoni            #+#    #+#             */
/*   Updated: 2024/01/26 16:59:35 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list args, char c, int *len)
{
	if (c == 'c')
		ft_printchar(va_arg(args, int), len);
	else if (c == 's')
		ft_printstr(va_arg(args, char *), len);
	else if (c == 'p')
		ft_printptr(va_arg(args, unsigned long long), len);
	else if (c == 'd' || c == 'i')
		ft_printnbr(va_arg(args, int), len);
	else if (c == 'u')
		ft_printunsig(va_arg(args, unsigned int), len);
	else if (c == 'x')
		ft_printhex(va_arg(args, unsigned int), len, 1);
	else if (c == 'X')
		ft_printhex(va_arg(args, unsigned int), len, 0);
	else if (c == '%')
		ft_printchar('%', len);
	else
		return (0);
	return (1);
}

int	ft_select_char(const char *format, int *i, int *len)
{
	while (format[*i] != '%' && format[*i])
	{
		ft_printchar(format[*i], len);
		(*i)++;
	}
	return (format[*i] == '%');
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	int		temp;
	va_list	args;

	if (!format)
		return (-1);
	len = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (ft_select_char(format, &i, &len))
		{
			i++;
			temp = ft_type(args, format[i], &len);
		}
		if (format[i] && temp)
			i++;
	}
	va_end(args);
	return (len);
}

// int	main(void)
// {
//     int i = 0;
//     int *ptr = &i;
//     ft_printf(" %p %p ", 0, 0);
//     ft_printf("oiii: %s, %d\n", "hellooo", 15);
//     ft_printf(" %p \n", -1);
//     ft_printf(" %p \n", 1);
//     ft_printf(" %p \n", 15);
//     ft_printf(" %p \n", 160);
//     ft_printf(" %p \n", 17);
//     ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
//     ft_printf(" %p %p \n", INT_MIN, INT_MAX);
//     ft_printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
//     ft_printf(" %p %p \n", 0, 0);
//     printf(" %p %p \n", ptr, ptr);
//     printf(" %p %d \n", ptr, 0);

// }
