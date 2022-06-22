#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *str1;
    unsigned char   *str2;
    size_t      i;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
/*
int main(void)
{
    char *s1 = "yakuppp";
    char *s2 = "yakupp";
    size_t n = 7;

    printf("%d", ft_memcmp(s1, s2, n));
}
*/