/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakaraba <cakaraba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:49:02 by cakaraba          #+#    #+#             */
/*   Updated: 2024/11/24 02:59:30 by cakaraba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adress(unsigned long int i)
{
	int	len;
	int	ret;

	len = 0;
	ret = 0;
	if (i == 0)
		return (ft_putstr("(nil)"));
	ret = ft_putstr("0x");
	if (ret == -1)
		return (-1);
	len += ret;
	ret = ft_hexconversion(i, 0);
	if (ret == -1)
		return (-1);
	len += ret;
	return (len);
}
