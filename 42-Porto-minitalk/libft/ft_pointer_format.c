/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:29:49 by dlima             #+#    #+#             */
/*   Updated: 2022/12/26 14:22:06 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	hexa_ptr(unsigned long long num)
{
	char	*chars;

	chars = "0123456789abcdef";
	if (num < 16)
	{
		write(1, &chars[num], 1);
	}
	else
	{
		hexa_ptr(num / 16);
		hexa_ptr(num % 16);
	}
}

int	ft_pointer_format(unsigned long long num)
{
	if (num == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	hexa_ptr(num);
	return (ft_hexanumlen(num) + 2);
}
