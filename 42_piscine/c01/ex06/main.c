#include <unistd.h>
#include <stdio.h>

int    ft_strlen(char    *str);

int    main(void)
{
    char    *c;
    c = "42kocaeli";
    printf("length of array = %d", ft_strlen(c));
}
