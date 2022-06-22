#include "libft.h"

int ft_isalpha(int c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        return (1);
    return (0);
}
/*
int main(void)
{
    printf("%d\n",ft_isalpha('a'));
    printf("%d",ft_isalpha('2'));
}
*/