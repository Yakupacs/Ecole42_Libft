// #include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *dstt;
    const char  *srcc;
    unsigned int    i;

    i = 0;
    dstt = (char *)dst;
    srcc = (char *)src;
    if (dst == 0 && src == 0)
        return (0);
    while (i < n)
    {
        dstt[i] = srcc[i];
        i++;
    }
    return (dst);
}

// #include <stdio.h>
// int main()
// {
//     char s1[] = "Merhaba";
//     char s2[] = "Dunya";

//     printf("%s", ft_memcpy(s1,s2,4));
// }