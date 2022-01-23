/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_of_strings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:11:27 by hashly            #+#    #+#             */
/*   Updated: 2022/01/23 15:33:57 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_free_str_of_str(char **arg)
{
	size_t	i;

	i = 0;
	if (!arg)
		return ;
	if (arg[i])
		free(arg[i++]);
	free(arg);
	return ;
}

char	**ft_add_line(char **arg, char *line)
{
	int		i;
	char	**ret;

	i = 0;
	while (arg && arg[i])
		i++;
	ret = (char **)malloc(sizeof(char *) * (i + 2));
	ret[i + 1] = NULL;
	if (line)
		ret[i] = ft_strdup(line);
	else
		ret[i] = NULL;
	while (--i >= 0)
		ret[i] = arg[i];
	return (ret);
}
