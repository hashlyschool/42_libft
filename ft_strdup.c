#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*ptr;
	int		i;

	len = ft_strlen(src);
	ptr = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (ptr == (void *)0)
		return ((void *)0);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
