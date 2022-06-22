#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isdigit(c) || ft_isalpha(c))
        return (1);
    return (0);
}
/*
int main(void)
{
    printf("%d", ft_isalnum(3));
    printf("%d", ft_isalnum('a'));
}
*/