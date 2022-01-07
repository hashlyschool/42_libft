/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:26:39 by hashly            #+#    #+#             */
/*   Updated: 2022/01/07 17:26:42 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	n;

	if (!src)
		return (0);
	len = ft_strlen(src);
	if (!dst || !size)
		return (len);
	if (size)
	{
		if (len < size)
			n = len;
		else
			n = size - 1;
		while (n--)
			*dst++ = *src++;
		*dst = 0;
	}
	return (len);
}
