/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakaraba <cakaraba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:49:57 by cakaraba          #+#    #+#             */
/*   Updated: 2024/11/24 03:00:32 by cakaraba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_putnbr_unsigned(n / 10);
		len += ft_putnbr_unsigned(n % 10);
	}
	else if (n < 10)
	{
		if (ft_putchar(n + 48) == -1)
			return (-1);
		len += 1;
	}
	return (len);
}
