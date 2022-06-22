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