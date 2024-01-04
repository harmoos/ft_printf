/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:28:35 by nleoni            #+#    #+#             */
/*   Updated: 2024/01/04 18:46:25 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void     ft_printhex(unsigned int n, int *len, int format)
{
    char    *b;

    if (format == 1)
        b = "0123456789abcdef";
    else
        b = "0123456789ABCDEF";
    if (n >= 16)
    {
        ft_printhex((n / 16), len, format);
        ft_printhex((n % 16), len, format);
    }
    else
        ft_printchar(b[n], len);
}

// int		main(void)
// {
// 	int a = 1;
// 	int *i = &a;
// 	ft_printhex(16, i, 1);
// 	ft_printhex(153, i, 1);
// 	return (0);
// }
