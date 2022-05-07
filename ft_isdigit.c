int ft_isdigit(int c)
{
    if ('0' <= c && c <= '9')
        return (1);
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char a;
    
//     a = '2';
//     printf("%d", ft_isdigit(a));
// }