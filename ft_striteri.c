#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t  i;

    i = 0;
    while (s[i])
    {
        (*f)(i, &s[i]);
        i++;
    }
}

// void    lower(unsigned int a, char *s)
// {
//     int i = 0;

//     while (s[i])
//     {
//         if (s[i] >= 65 && s[i] <= 90)
//             s[i] = s[i] + 32;
//         i++;
//     }
//     s[i] = '\0';
// }

// int main()
// {
//     char str[] = "YaKuP";

//     ft_striteri(str, lower);
//     printf("%s", str);
// }