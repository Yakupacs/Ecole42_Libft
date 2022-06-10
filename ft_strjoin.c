#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *dizi;
    size_t  i;

    i = 0;
    dizi = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if(dizi!)
        return (NULL);
    while(*s1)
        dizi[i++] = *s1++;
    while(*s2)
        dizi[i++] = *s2++;
    dizi[i] = '\0';
    return (dizi);
}