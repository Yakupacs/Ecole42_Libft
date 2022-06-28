/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:24:30 by yacis             #+#    #+#             */
/*   Updated: 2022/06/23 00:24:31 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
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