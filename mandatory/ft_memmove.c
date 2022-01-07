/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:25:57 by hashly            #+#    #+#             */
/*   Updated: 2022/01/07 17:26:00 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *source, size_t count)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)source;
	if (s > d)
	{
		while (count--)
			*d++ = *s++;
	}
	else if (s < d)
	{
		while (count--)
			*(d + count) = *(s + count);
	}
	return (dest);
}
