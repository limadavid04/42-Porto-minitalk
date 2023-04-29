/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:07:03 by dlima             #+#    #+#             */
/*   Updated: 2022/11/17 17:54:44 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && (i + j) < len)
			j++;
		if (ft_strlen(little) == j)
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char *s1 = "MZIRIBMZIRIBMZE123";
//     char *s2 = "MZIRIBMZE";
//     size_t max = ft_strlen(s2);
//     char *i2 = ft_strnstr(s1, s2, max);
// 	printf("%s", i2);

// }
