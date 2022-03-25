/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hashly <hashly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:23:05 by hashly            #+#    #+#             */
/*   Updated: 2022/03/25 12:27:33 by hashly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int	ft_isprint_str(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (ft_isprint(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
