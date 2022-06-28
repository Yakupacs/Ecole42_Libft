/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis@student.42istanbul.com.tr <yacis>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:23:24 by yacis             #+#    #+#             */
/*   Updated: 2022/06/28 18:29:46 by yacis@stude      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*str;

	str = malloc(size * num);
	if (!str)
		return (str);
	return (ft_memset(str, 0, size * num));
}
/*
int	main(void)
{
	size_t x = 5;
	size_t y = 6;
	char *s;
	int	i = 0;

	s = ft_calloc(x, y);
	while(s[i] == 0)
	{
		printf("%d", s[i]);
		i++;
	}
}
*/