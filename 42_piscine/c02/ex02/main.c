#include <stdio.h>

int    ft_str_is_alpha(char *str);

int    main(void)
{
    printf("%d\n", ft_str_is_alpha("abcdef"));
    printf("%d\n", ft_str_is_alpha("abc1de247f"));
    printf("%d\n", ft_str_is_alpha("-_136efgj2"));
}
