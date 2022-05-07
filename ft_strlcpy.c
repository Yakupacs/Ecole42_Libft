#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t srclen;

    srclen = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        while (src[i] && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srclen);
}

// int main()
// {
//     char s1[] = "yakup";
//     char s2[] = "acis";

//     printf("%d", ft_strlcpy(s1, s2, 3));
// }