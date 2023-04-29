/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:16:08 by dlima             #+#    #+#             */
/*   Updated: 2023/04/29 17:24:51 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	decrypt(int sig)
{
	static int				bit_pos = 7;
	static unsigned char	byte = 0;

	if (bit_pos < 0)
	{
		bit_pos = 7;
		byte = 0;
	}
	if (sig == SIGUSR1)
	{
		byte |= 1 << bit_pos;
	}
	bit_pos--;
	if (bit_pos < 0)
		write(1, &byte, 1);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_handler = &decrypt;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		exit(1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		exit(1);
	ft_printf("%d\n", getpid());
	while (1)
		pause();
	return (0);
}
