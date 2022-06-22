#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    char    *str;

    str = (char *)malloc(size * num);
    if (!str)
        return (0);
    return (ft_memset(str, 0, num * size));
}
/*
int	main(void)
{
	size_t x = 5;
	size_t y = 6;
	char *s;
	int	i = 0;

	s = ft_calloc(x, y);
	while(s[i] == 0)
	{
		printf("%d", s[i]);
		i++;
	}
}
*/