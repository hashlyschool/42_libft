/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:05:23 by hashly            #+#    #+#             */
/*   Updated: 2022/03/26 19:59:09 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	find_q_word(char const *s, char *c, size_t len_s, size_t len_c)
{
	size_t	q_word;
	char	*ptr_c;
	size_t	i;

	ptr_c = ft_strnstr(s, c, ft_strlen(s));
	while (ptr_c)
	{
		i = 0;
		while (i < len_c)
			ptr_c[i++] = 0;
		ptr_c = ft_strnstr(ptr_c + len_c, c, ft_strlen(ptr_c + len_c));
	}
	q_word = 0;
	i = 0;
	while (i < len_s)
	{
		while (i < len_s && s[i] == 0)
			i++;
		if (i < len_s && s[i] != 0)
			q_word++;
		while (i < len_s && s[i] != 0)
			i++;
	}
	return (q_word);
}

static	void	fill_ret(char **ret, char *s, size_t q_word, size_t len_s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < q_word)
	{
		while (j < len_s && s[j] == 0)
			j++;
		if (j < len_s && s[j] != 0)
			ret[i] = ft_strdup(s + j);
		while (j < len_s && s[j] != 0)
			j++;
		i++;
	}
	ret[q_word] = NULL;
}

char	**ft_split_2(char const *s, char *c)
{
	char	**ret;
	char	*copy;
	size_t	q_word;
	size_t	len_s;

	if (!s || !c)
		return (NULL);
	copy = ft_strdup(s);
	len_s = ft_strlen(s);
	q_word = find_q_word(copy, c, len_s, ft_strlen(c));
	ret = (char **)malloc(sizeof(char *) * (q_word + 1));
	fill_ret(ret, copy, q_word, len_s);
	free(copy);
	return (ret);
}
