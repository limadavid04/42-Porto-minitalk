/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:15:46 by dlima             #+#    #+#             */
/*   Updated: 2023/04/29 17:26:17 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	encrypt(char *str, int pid)
{
	int				i;
	unsigned char	c;
	int				nbr_bits;

	i = 0;
	while (str[i])
	{
		nbr_bits = 8;
		c = str[i];
		while (nbr_bits > 0)
		{
			if (c & 0b10000000)
			{
				if (kill(pid, SIGUSR1) == -1)
					exit(1);
			}
			else
				if (kill(pid, SIGUSR2) == -1)
					exit(1);
			c <<= 1;
			nbr_bits--;
			usleep(50);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char		*str;
	int			pid;

	if (argc != 3)
	{
		printf("Invalid argument number");
		return (0);
	}
	str = argv[2];
	pid = ft_atoi(argv[1]);
	encrypt(str, pid);
	return (0);
}
