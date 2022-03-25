/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charjoin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:58:27 by hashly            #+#    #+#             */
/*   Updated: 2022/03/25 17:31:03 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_charjoin_libft(char *s1, char s2)
{
	char	*ptr;
	size_t	len;

	if (!s1)
	{
		ptr = (char *)malloc(sizeof(*s1) * 2);
		ptr[0] = s2;
		ptr[1] = 0;
		return (ptr);
	}
	if (s2 == 0)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + 1;
	ptr = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!ptr)
		return (NULL);
	while (*s1)
		*ptr++ = *s1++;
	*ptr++ = s2;
	*ptr = 0;
	return (ptr - len);
}

char	*ft_charjoin_libft_free_s1(char *s1, char s2)
{
	char	*ptr;
	size_t	len;
	char	*free_str;

	if (!s1)
	{
		ptr = (char *)malloc(sizeof(char ) * 2);
		ptr[0] = s2;
		ptr[1] = 0;
		return (ptr);
	}
	if (s2 == 0)
		return ((char *)s1);
	free_str = (char *)s1;
	len = ft_strlen(s1) + 1;
	ptr = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!ptr)
		return (NULL);
	while (*s1)
		*ptr++ = *s1++;
	*ptr++ = s2;
	*ptr = 0;
	free(free_str);
	return (ptr - len);
}
