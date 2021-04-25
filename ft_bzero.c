#include "libft.h"

void    ft_bzero(void* s ,size_t n)
{
	unsigned char *b;

	b = (unsigned char *)(s);
	while (n--)
		*b++ = 0;
	return ;
}