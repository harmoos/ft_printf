/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:00:35 by nleoni            #+#    #+#             */
/*   Updated: 2024/01/26 00:30:35 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_type(va_list args, char c, int *len);
void	ft_printchar(char c, int *len);
void	ft_printstr(char *str, int *len);
void	ft_printptr(unsigned long long ptr, int *len);
void	ft_printnbr(int n, int *len);
void	ft_printunsig(unsigned int n, int *len);
void	ft_printhex(unsigned int n, int *len, int format);
void	ft_printptrr(unsigned long long n, int *len);

#endif
