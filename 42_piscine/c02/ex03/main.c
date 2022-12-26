#include <stdio.h>

int ft_str_is_numeric(char *str);

int    main(void)
{
    printf("%d\n", ft_str_is_numeric("4212"));
    printf("%d\n", ft_str_is_numeric("42ecole"));
    printf("%d\n", ft_str_is_numeric(".(42_kocaeli?"));
}
