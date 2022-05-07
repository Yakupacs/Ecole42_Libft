#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned int    i;
    char        *str;

    str = (char *)s;
    i = 0;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}

// #include <stdio.h>
// int main()
// {
// int mark[5] = {11, 222, 3333, 44444, 555555};
// ft_bzero(&mark, 9);
// printf("%d %d %d %d %d\n" ,mark[0], mark[1], mark[2], mark[3], mark[4]);
// }