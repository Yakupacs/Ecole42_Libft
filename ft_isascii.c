int ft_isascii(int c)
{
    if (0 <= c && c <= 127)
        return (1);
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char x;

//     x = 'a';
//     printf("%d", ft_isascii(x));
// }