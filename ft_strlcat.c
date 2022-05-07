#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  dlen;

    dlen = 0;
    while (dest[dlen] != '\0' && dlen < size)
        dlen++;
    i = dlen;
    while (src[dlen - i] && (dlen + 1) < size)
    {
        dest[dlen] = src[dlen - i];
        dlen++;
    }
    if (i < size)
        dest[dlen] = '\0';
    return (i + ft_strlen(src));
}

// int main()
// {
//     char s1[] = "yakup";
//     const char s2[] = "acis";
//     printf("%zu", ft_strlcat(s1, s2, 5));
// }