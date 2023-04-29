/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:14:30 by dlima             #+#    #+#             */
/*   Updated: 2022/12/14 12:37:54 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nbr;

	nbr = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_len(nbr);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		nbr *= -1;
	if (nbr == 0)
		return (ft_strdup("0"));
	str[len] = '\0';
	while (nbr != 0)
	{
		str[len - 1] = nbr % 10 + 48;
		len--;
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
