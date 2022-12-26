#include <unistd.h>
#include <stdio.h>

int    ft_strlen(char    *str);

int    main(void)
{
    char    *c;
	int	a;
    
    c = "Ecole_42";
	a = ft_strlen(c);
    printf("length of array = %d", a);
}
