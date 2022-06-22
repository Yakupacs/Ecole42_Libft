/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:23:18 by yacis             #+#    #+#             */
/*   Updated: 2022/06/23 00:23:22 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
        unsigned int    i;
        char        *str;

        str = (char *)s;
        i = 0;
        while (i < n)
        {
            str[i] = 0;
            i++;
        }
}
/*
int main()
{
    int i;
    unsigned int mark1[5] = {4294967295, 4294967295, 4294967295, 4294967295, 4294967295};
    unsigned char mark2[6] = "yakup";
    unsigned char *ch = mark2 + 4;   

    ft_bzero(mark1, 2);
    printf("%d %d %d %d %d\n" ,mark1[0], mark1[1], mark1[2], mark1[3], mark1[4]);
    printf("%s\n", ch);
    i = 0;
    unsigned char data;
    while (i < sizeof(mark1)){
        if (!(i % 4))
            printf("\n");
        data = *(((unsigned char *) mark1) + i);
        printf("%03hhu ", data);
        i++;
    }
}
*/