#include "libft.h"

size_t  if_word_len(char const *s, char c)
{
    size_t  len;

    len = 0;
    while (s[len] && s[len] != c)
        len++;
    return (len);
}

static size_t   len_word(char const *s, char c)
{
    size_t  len;

    len = 0;
    while (*s != '\0')
    {
        if (*s != c && (s[1] == '\0' || s[1] == c))
            len++;
        s++;
    }
    return (len);
}

char **ft_split(char const *s, char c)
{
    char    **dizi;
    size_t  i;
    size_t  j;
    size_t  len;

    if(!s)
        return (NULL);
    len = len_word(s, c);
    dizi = (char **)malloc(sizeof(char *) * len + 1);
    if (dizi == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        while (*s == c && *s != '\0')
            s++;
        dizi[i] = (char *)malloc(sizeof(char) * if_word_len(s, c) + 1);
        j = 0;
        while (*s != c && *s != '\0')
            dizi[i][j++] = *s++;
        dizi[i][j] = '\0';
        i++;
    }
    dizi[i] = NULL;
    return (dizi);
}
/*
int main()
{
    char s[] = "42 istanbula hos geldiniz.";
    char c = ' ';
    printf("%s\n", ft_split(s, c)[0]);
    printf("%s\n", ft_split(s, c)[1]);
    printf("%s\n", ft_split(s, c)[2]);
    printf("%s", ft_split(s, c)[3]);
}
*/