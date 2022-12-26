#include <stdio.h>

int    ft_str_is_uppercase(char *str);

int    main()
{
       printf("%d\n", ft_str_is_uppercase("ECOLE"));
       printf("%d\n", ft_str_is_uppercase("Ecole"));
       printf("%d\n", ft_str_is_uppercase("42_ECOLE"));
}
