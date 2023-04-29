/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima <dlima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:36:12 by dlima             #+#    #+#             */
/*   Updated: 2022/12/14 16:48:29 by dlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next_node;

	if (lst && del)
	{
		node = *lst;
		while (node)
		{
			next_node = node->next;
			ft_lstdelone(node, del);
			node = next_node;
		}
		*lst = NULL;
	}
}
