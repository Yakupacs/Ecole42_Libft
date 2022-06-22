#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t  hay;
    size_t  need;

    hay = 0;
    if (*needle == 0)
        return ((char *)haystack);
    while (haystack[hay] != 0 && hay < n)
    {
        need = 0;
        while (haystack[hay + need] == needle[need]
            && needle[need] && need + hay < n)
            need++;
        if (need == ft_strlen(needle))
            return ((char *)&haystack[hay]);
        hay++;
    }
    return (NULL);
}
/*
int main()
{
    const char *str;
    const char *str1;
    str = "42 istanbula hos geldiniz";
    str1 = "hos";
    printf("%s", ft_strnstr(str, str1, 16));
}
*/