/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:26:52 by hashly            #+#    #+#             */
/*   Updated: 2022/01/11 16:55:37 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2)
	{
		if (i == (n - 1))
			return (0);
		i++;
		++s1;
		++s2;
		if ((*s2 == *s1) && (*s1 == '\0'))
			return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
