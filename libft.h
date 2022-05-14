#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t	ft_strlen(const char *s);
void    *ft_memset(void *b, int c, unsigned int len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, void *src, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);
char ft_strrchr(const char *str, int c);

#endif