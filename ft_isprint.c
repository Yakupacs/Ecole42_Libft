int ft_isprint(int c)
{
    if (32 <= c && c < 127)
        return (1);
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char c;

//     c = '\n';
//     printf("%d", ft_isprint(c));
// }