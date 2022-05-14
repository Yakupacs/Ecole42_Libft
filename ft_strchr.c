#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)&str[i]);
    return (NULL);
}