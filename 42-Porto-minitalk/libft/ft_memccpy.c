/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:39:10 by dlima             #+#    #+#             */
/*   Updated: 2022/10/21 11:47:41 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*buff;
	const char	*str;

	buff = dest;
	str = src;
	i = 0;
	while (i < n)
	{
		buff[i] = str[i];
		if (str[i] == (unsigned char) c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
//does the pointer need to be null?

// int main(void)
// {
// 	char str1[] = "david";
// 	char str2[7] = "d";
// 	ft_memccpy(str2, str1, ' ', 5);
// 	printf("%s", str2);
// }
