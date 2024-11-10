/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakaraba <cakaraba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:49:02 by cakaraba          #+#    #+#             */
/*   Updated: 2024/11/10 23:45:03 by cakaraba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adress(void *ptr)
{
	int				len;
	unsigned long	p;

	len = 0;
	p = (unsigned long)ptr;
	len += ft_putchar('0');
	len += ft_putchar('x');
	len += ft_hexconversion(p, 'x');
	return (len);
}
