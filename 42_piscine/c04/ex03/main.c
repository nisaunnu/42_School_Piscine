#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char *s = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(s));
}
