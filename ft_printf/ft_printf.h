/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakaraba <cakaraba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:49:25 by cakaraba          #+#    #+#             */
/*   Updated: 2024/11/10 23:23:03 by cakaraba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	ft_putchar(int d);
int	ft_hexconversion(unsigned long int args, int up_lowcase);
int	ft_putnbr(int n);
int	ft_print_adress(void *ptr);
int	ft_putnbr_unsigned(unsigned int n);

#endif
