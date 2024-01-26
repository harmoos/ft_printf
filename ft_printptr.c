/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:16:30 by nleoni            #+#    #+#             */
/*   Updated: 2024/01/26 00:21:59 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printptrr(unsigned long long n, int *len)
{
	char	*b;

	b = "0123456789abcdef";
	if (n >= 16)
	{
		ft_printptrr((n / 16), len);
		ft_printptrr((n % 16), len);
	}
	else
		ft_printchar(b[n], len);
}

void	ft_printptr(unsigned long long ptr, int *len)
{
	if (ptr == 0)
		ft_printstr("(nil)", len);
	else
	{
		ft_printchar('0', len);
		ft_printchar('x', len);
		ft_printptrr(ptr, len);
	}
}

// int     main(void)
// {
//     //int     nbr = 1;
//     int    *ptr = 12;

//     printf("original: %p\n", ((void *)ptr));
//     printf("minha %d\n", ft_printptr((152), ptr));
// }
