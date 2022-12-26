#include <unistd.h>
#include <stdio.h>

void    ft_ft(int *nbr);

int    main(void)
{
    int    *nbr;
    int    number;

    number = 7;
    nbr = &number;
    printf("before function: %d\n", *nbr);
    ft_ft(nbr);
    printf("after function: %d", *nbr);
}
