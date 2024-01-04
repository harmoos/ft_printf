/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsig.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:47:04 by nleoni            #+#    #+#             */
/*   Updated: 2024/01/04 18:46:25 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_printunsig(unsigned int n, int *len)
{
    if (n == 0)
        ft_printchar('0', len);
    else
    {
        if (n > 9)
        {
            ft_printunsig(n / 10, len);
            ft_printunsig(n % 10, len);
        }
        else
            ft_printchar(n + 48, len);
    }
}

// int     main(void)
// {
//     printf("%u\n", -152);
//     printf("%u\n", ft_printunsig(-152));
// }
