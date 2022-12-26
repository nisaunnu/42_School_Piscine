#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main()
{
	char str[] = "42_ECOLE";
	printf("%s", ft_strlowcase(str));
}
