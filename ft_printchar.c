/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:11:57 by nleoni            #+#    #+#             */
/*   Updated: 2024/01/26 00:33:57 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(char c, int *len)
{
	*len += 1;
	write(1, &c, 1);
}

// int     main(void)
// {
//     printf("%d\n", printf("%c\n", 'j'));
//     printf("%d\n", ft_printchar('j'));
// }
