/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexconversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakaraba <cakaraba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:48:43 by cakaraba          #+#    #+#             */
/*   Updated: 2024/11/10 22:48:54 by cakaraba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexconversion(unsigned long int args, int up_lowcase)
{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (up_lowcase == 1)
		base = "0123456789ABCDEF";
	if (args >= 16)
		len += ft_hexconversion(args / 16, up_lowcase);
	len += ft_putchar(base[args % 16]);
	return (len);
}
