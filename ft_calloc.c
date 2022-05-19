#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    char    *str;

    str = (char *)malloc(size * num);
    if (!str)
        return (0);
    return (ft_memset(str, 0, count * size));
}