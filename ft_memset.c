#include "libft.h"

void* ft_memset(void *buf, int ch, size_t count)
{
	unsigned char	*b;

	b = (unsigned char *)buf;
	while (count--)
		*b++ = ch;
	return buf;
}