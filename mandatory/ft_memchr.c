/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:25:45 by hashly            #+#    #+#             */
/*   Updated: 2022/01/07 17:28:07 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)(arr) == (unsigned char)c)
			return ((char *)(arr));
		arr++;
	}
	return (NULL);
}
