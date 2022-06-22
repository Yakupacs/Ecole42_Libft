/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:49 by yacis             #+#    #+#             */
/*   Updated: 2022/06/23 00:24:50 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  dlen;

    dlen = 0;
    while (dest[dlen] != '\0' && dlen < size)
        dlen++;
    i = dlen;
    while (src[dlen - i] && (dlen + 1) < size)
    {
        dest[dlen] = src[dlen - i];
        dlen++;
    }
    if (i < size)
        dest[dlen] = '\0';
    return (i + ft_strlen(src));
}
/*
int main()
{
    char s1[] = "yakup";
    const char s2[] = "acis";

	printf("%s\n", s1);
	ft_strlcat(s1, s2, 7);
	printf("%s\n", s1);
    printf("%zu\n", ft_strlcat(s1, s2, 7));
}
*/