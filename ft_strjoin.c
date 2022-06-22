#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *dizi;
    size_t  i;

    i = 0;
    dizi = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if(dizi == NULL)
        return (NULL);
    while(*s1)
        dizi[i++] = *s1++;
    while(*s2)
        dizi[i++] = *s2++;
    dizi[i] = '\0';
    return (dizi);
}
/*
int	main(void)
{
	const char	*str1 = "yakup";
	const char	*str2 = "acis";
	char	*dizi;

	dizi = ft_strjoin(str1, str2);
	printf("%s", dizi);
}
*/