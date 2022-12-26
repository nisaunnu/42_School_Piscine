#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main()
{
	printf("%d\n", ft_str_is_printable("42_Ecole"));
	printf("%d\n", ft_str_is_printable("şçü"));
}
