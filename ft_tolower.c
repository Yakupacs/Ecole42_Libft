#include "libft.h"

int ft_tolower(int c)
{
    if ('A' <= c && c <= 'Z')
        c = c + 32;
    return (c);
}
/*
int	main()
{
	printf("%c", ft_tolower('E'));
}
*/