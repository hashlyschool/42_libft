#include "libft.h"

void* ft_memmove(void *dest, const void *source, size_t count)
{
    unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)source;
	while (count--)
		*d++ = *s++;
	return (dest);
}