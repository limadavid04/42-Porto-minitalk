/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:22:56 by dlima             #+#    #+#             */
/*   Updated: 2022/11/17 18:17:45 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] || (char)c == '\0')
	{
		if (str[i] == (char) c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	printf("%s", ft_strchr("david", 'i'));

// }
