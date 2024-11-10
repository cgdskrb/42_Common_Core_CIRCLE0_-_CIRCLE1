/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakaraba <cakaraba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:50:03 by cakaraba          #+#    #+#             */
/*   Updated: 2024/11/10 22:50:04 by cakaraba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;
	int	ret;

	len = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (*str)
	{
		ret = ft_putchar(*str++);
		if (ret == -1)
			return (-1);
		len += ret;
	}
	return (len);
}
