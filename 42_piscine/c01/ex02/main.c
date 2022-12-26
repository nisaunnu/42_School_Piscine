#include <unistd.h>
#include <stdio.h>

void    ft_swap(int    *a, int    *b);

int    main(void)
{
    int    a;
    int    b;

    a = 12;
    b = 8;
    printf("before modified: %d ve %d \n", a, b);
    ft_swap(&a, &b);
    printf("after modified: %d ve %d", a, b);
}
