#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
int main()
{
    ft_putchar_fd('a',1);
    ft_putchar_fd('a',2);
    ft_putchar_fd('a',3);
    ft_putchar_fd('a',4);
    ft_putchar_fd('a',0);
}
*/