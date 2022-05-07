int isalpha(int c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        return (1);
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char a;

//     a = '2';
//     printf("%d",isalpha(a));
// }