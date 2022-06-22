/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:25 by yacis             #+#    #+#             */
/*   Updated: 2022/06/23 00:24:26 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstt;
	unsigned char	*srcc;
	size_t	i;

	dstt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			*(dstt + len) = *(srcc + len);
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}
/*
int	main(void)
{
    char s1[] = "Merhaba";
	char s2[] = "Merhab";
	size_t a = 3;

    printf("%s", ft_memmove(s1+2,s1,a));
}
*/