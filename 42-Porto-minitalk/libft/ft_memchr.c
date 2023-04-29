/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:01:36 by dlima             #+#    #+#             */
/*   Updated: 2022/10/21 16:52:17 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == (unsigned char) c)
			return (src + i);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char src[] = "david";
// 	int c = 'v';
// 	char *ptr;

// 	ptr = (char *) ft_memchr(src, c, 2);
// 	printf("%s", ptr);
// }
