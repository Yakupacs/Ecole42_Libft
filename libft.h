#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
size_t	ft_strlen(const char *s);
void    ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
void    *ft_memcpy(void *dst, const void *src, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
void    *ft_memset(void *b, int c, unsigned int len)
void	*ft_memmove(void *dst, void *src, size_t len)

#endif