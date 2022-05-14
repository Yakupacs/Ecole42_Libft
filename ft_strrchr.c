#include "libft.h"

char ft_strrchr(const char *str, int c)
{
    size_t i;

    i = ft_strlen(str);
    while (i > 0)
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        i--;
    }
    if (s[0] == (char)c)
        return ((char *)&str[0]);
    return (NULL);
}