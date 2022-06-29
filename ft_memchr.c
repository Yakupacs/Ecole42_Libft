/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:19 by yacis             #+#    #+#             */
/*   Updated: 2022/06/29 14:13:38 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		if (*((const char *)s) == (const char) c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*s = "yakup";
	int c = 'k';
	size_t	n = 3;

	printf("%s", ft_memchr(s, c, n));
}
*/