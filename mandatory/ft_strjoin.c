/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:26:31 by hashly            #+#    #+#             */
/*   Updated: 2022/03/25 16:37:21 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!ptr)
		return (NULL);
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	return (ptr - len);
}

char	*ft_strjoin_free_s1(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;
	char	*free_str;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return ((char *)s1);
	free_str = (char *)s1;
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (s1 && *s1)
		*ptr++ = *s1++;
	while (s2 && *s2)
		*ptr++ = *s2++;
	*ptr = 0;
	free(free_str);
	return (ptr - len);
}

char	*ft_strjoin_free_s2(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;
	char	*free_str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return (ft_strdup(s1));
	free_str = (char *)s2;
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!ptr)
		return (NULL);
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	free(free_str);
	return (ptr - len);
}

char	*ft_strjoin_free_all(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;
	char	*free_str1;
	char	*free_str2;

	if (!s1 || !s2)
		return (NULL);
	free_str1 = (char *)s1;
	free_str2 = (char *)s2;
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!ptr)
		return (NULL);
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	free(free_str1);
	free(free_str2);
	return (ptr - len);
}
