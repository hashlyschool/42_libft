/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:26:00 by hashly            #+#    #+#             */
/*   Updated: 2022/01/07 17:26:03 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)buf;
	while (count--)
		*(unsigned char *)ptr++ = (unsigned char)ch;
	return (buf);
}
