#include <stdio.h>

int    ft_str_is_lowercase(char *str);

int    main()
{
    printf("%d\n", ft_str_is_lowercase("ecole"));
    printf("%d\n", ft_str_is_lowercase("Ecole"));
    printf("%d\n", ft_str_is_lowercase("42_Ecole"));
}
