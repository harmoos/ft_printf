/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:13:08 by nleoni            #+#    #+#             */
/*   Updated: 2024/01/04 18:46:25 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void     ft_printstr(char *str, int *len)
{
    int     i;

    i = 0;
    if (str == NULL)
    {
        ft_printstr("(null)", len);
        return;
    }
    while (str[i])
    {
        ft_printchar(str[i], len);
        i++;
    }
}
