#ifndef     LIBFT_H
# define    LIBFT_H

# include   <stddef.h>

void*   ft_memset(void *buf, int ch, size_t count);
void    ft_bzero(void* s, size_t n);
void*   ft_memcpy(void *dest, const void *src, size_t count);
void*   ft_memccpy(void *dest, const void *source, int ch, size_t count);
void*   ft_memmove(void *dest, const void *source, size_t count);
void*   ft_memchr (const void *arr, int c, size_t n);
size_t  ft_strlen( const char *str );

#endif