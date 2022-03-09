/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_of_strings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:11:27 by hashly            #+#    #+#             */
/*   Updated: 2022/03/09 18:25:16 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_print_str_of_str(char **arr)
{
	size_t	i;
	signed	j;
	char	c;

	i = 0;
	if (!arr)
		return ;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (ft_isprint(arr[i][j]))
				ft_putchar_fd(arr[i][j], 1);
			else
			{
				write(1, "\\", 1);
				c = arr[i][j];
				ft_putnbr_fd(c, 1);
			}
			j++;
		}
		ft_putstr_fd("\n", 1);
		i++;
	}
}

void	ft_free_str_of_str(char ***arg)
{
	size_t	i;
	char	**temp;

	i = 0;
	temp = *arg;
	if (!temp)
		return ;
	while (temp[i])
		free(temp[i++]);
	free(temp);
	*arg = NULL;
	return ;
}

size_t	ft_len_str_str(char **arr)
{
	size_t	len;

	len = 0;
	while (arr && arr[len])
		len++;
	return (len);
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
	while (--i >= 0 && arg)
		ret[i] = arg[i];
	if (arg)
		free(arg);
	return (ret);
}
