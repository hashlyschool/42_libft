/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:21:00 by hashly            #+#    #+#             */
/*   Updated: 2022/01/07 17:21:03 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst)
	{
		while (*lst)
		{
			ptr = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = ptr;
		}
	}
	return ;
}
