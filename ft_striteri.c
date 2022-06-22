/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:45 by yacis             #+#    #+#             */
/*   Updated: 2022/06/23 00:24:46 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t  i;

    i = 0;
    while (s[i])
    {
        (*f)(i, s);
        i++;
    }
}

void lower(unsigned int i, char *s)
{
    if (s[i] >= 65 && s[i] <= 90)
        s[i] = s[i] + 32;

}
/*
int main()
{
    char str[] = "YAKUP";

    ft_striteri(str, lower);
    printf("%s", str);
}
*/