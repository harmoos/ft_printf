/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:14:23 by nleoni            #+#    #+#             */
/*   Updated: 2024/01/26 00:23:34 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr(int n, int *len)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_printchar('-', len);
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr > 9)
	{
		ft_printnbr(nbr / 10, len);
		ft_printnbr(nbr % 10, len);
	}
	else
		ft_printchar(nbr + 48, len);
}
