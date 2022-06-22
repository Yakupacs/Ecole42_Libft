#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    size_t  i;

    str = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        str[i] = c;
        i++;
    }
    return (b);
}
/*
int main()
{
    unsigned int    len = 3;
    unsigned char   str[] = "yakup";

    printf("%s", ft_memset(str, 'z', len));
}
*/