#ifndef     LIBFT_H
# define    LIBFT_H

# include   <stddef.h>

void	*ft_memset(void *buf, int ch, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t count);
void	*ft_memccpy(void *dest, const void *source, int ch, size_t count);
void	*ft_memmove(void *dest, const void *source, size_t count);
void	*ft_memchr (const void *arr, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen( const char *str );
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr (const char *s, int c);
char	*ft_strrchr(const char *s, int c);

#endif
