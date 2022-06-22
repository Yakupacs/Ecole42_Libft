/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:25:03 by yacis             #+#    #+#             */
/*   Updated: 2022/06/23 00:25:04 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    size_t i;

    i = ft_strlen(str);
    while (i > 0)
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        i--;
    }
    if (str[0] == (char)c)
        return ((char *)&str[0]);
    return (NULL);
}
/*
int main()
{
	const char *str = "yakup";
	printf("%s", ft_strrchr(str, 'k'));
}
*/