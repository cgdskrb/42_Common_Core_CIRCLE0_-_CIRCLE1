/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakaraba <cakaraba@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 23:35:38 by cakaraba          #+#    #+#             */
/*   Updated: 2024/11/10 23:43:56 by cakaraba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char format, va_list args, int *len)
{
	int	ret;

	ret = 0;
	if (format == '%')
		ret = ft_putchar('%');
	else if (format == 's')
		ret = ft_putstr(va_arg(args, char *));
	else if (format == 'c')
		ret = ft_putchar(va_arg(args, int));
	else if (format == 'p')
		ret = ft_print_adress(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		ret = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		ret = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		ret = ft_hexconversion(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		ret = ft_hexconversion(va_arg(args, unsigned int), 1);
	else
		ret = ft_putchar('%') % ft_putchar(format);
	if (ret == -1)
		return (-1);
	*len += ret;
	return (0);
}

static int	spec_format(const char *str, int *i, va_list args, int *len)
{
	int	ret;

	(*i)++;
	ret = check_format(str[*i], args, len);
	if (ret == -1)
		return (-1);
	return (ret);
}

static int	print_arg(const char c, int *len)
{
	int	ret;

	ret = ft_putchar(c);
	if (ret == -1)
		return (-1);
	*len += ret;
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	int		ret;
	va_list	args;	

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			ret = spec_format(str, &i, args, &len);
		else
			ret = print_arg(str[i], &len);
		if (ret == -1)
		{
			va_end(args);
			return (-1);
		}
		i++;
	}
	va_end(args);
	return (len);
}
