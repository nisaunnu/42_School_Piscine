#include <unistd.h>
#include <stdio.h>


void    ft_sort_int_tab(int *tab, int size);

int    main(void)
{
    int tab[6] = {7, 6, 3, 4, 2, 5};
    int size = 6;

    ft_sort_int_tab(tab, size);
    printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
    return (0);
}
