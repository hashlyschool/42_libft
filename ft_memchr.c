#include "libft.h"

void    *ft_memchr (const void *arr, int c, size_t n)
{
    size_t	i;

	if (!arr)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(arr + i) == (unsigned char)c)
			return ((void*)(arr + i));
		i++;
	}
	return (NULL);
}