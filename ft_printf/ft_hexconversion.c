/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexconversion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakaraba <cakaraba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:48:43 by cakaraba          #+#    #+#             */
/*   Updated: 2024/11/24 03:07:13 by cakaraba         ###   ########.fr       */
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
	if (ft_putchar(base[args % 16]) == -1)
		return (-1);
	len += 1;
	return (len);
}
