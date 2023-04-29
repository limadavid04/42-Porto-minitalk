/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:48:54 by dlima             #+#    #+#             */
/*   Updated: 2022/12/28 10:30:55 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_formater(va_list args, char c)
{
	int	char_num;

	char_num = 0;
	if (c == 'c')
		char_num = ft_char_format(va_arg(args, int));
	else if (c == 's')
		char_num = ft_string_format(va_arg(args, char *));
	else if (c == 'p')
		char_num = ft_pointer_format(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		char_num = ft_decimal_format(va_arg(args, int));
	else if (c == 'u')
		char_num = ft_unsigned_format(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		char_num = ft_hexadecimal_format(va_arg(args, unsigned int), c);
	else if (c == '%')
	{
		write(1, "%", 1);
		char_num++;
	}
	return (char_num);
}

int	ft_printf(const char *str, ...)
{
	int		char_num;
	va_list	args;
	int		i;

	i = 0;
	char_num = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			char_num += str_formater(args, str[i + 1]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			char_num++;
		}
		i++;
	}
	va_end(args);
	return (char_num);
}
