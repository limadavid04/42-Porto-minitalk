/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:46:45 by dlima             #+#    #+#             */
/*   Updated: 2022/10/24 18:11:45 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	signal;

	signal = 1;
	nbr = 0;
	i = 0;
	while (((str[i] >= 8 && str[i] <= 13) || str[i] == 32) && str[i])
		i++;
	if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr * signal);
}
// int	main()
// {
// 	char str[] = "  \t \r 4 1134an";
// 	printf("ft_atoi: %d\n", ft_atoi(str));
// 	printf("atoi: %d", atoi(str));
// }
