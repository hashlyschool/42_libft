/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:26:28 by hashly            #+#    #+#             */
/*   Updated: 2022/03/25 16:27:28 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*ptr;

	len = ft_strlen(src);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = 0;
	ft_strlcpy(ptr, src, len + 1);
	return (ptr);
}
