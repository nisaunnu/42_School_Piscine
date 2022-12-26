#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	char src[] = "kocaeli";
	char dest[] = "42";
	printf("%d | %s\n", ft_strlcpy(dest, src, 6), dest);
}
