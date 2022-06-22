#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        i++;
    }
    if (c == '\0')
        return ((char *)&str[i]);
    return (NULL);
}
/*
int main(void)
{
    const char  str[] = "yakup";

    printf("%s", ft_strchr(str, 'u'));
}
*/