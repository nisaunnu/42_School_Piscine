#include <stdio.h>

int	ft_sqrt(int nb);

int main()
{
	int nb;
	
	nb = -1764;
	printf("square root of %d > %d\n", nb, ft_sqrt(nb));
	nb = 0;
	printf("square root of %d > %d\n", nb, ft_sqrt(nb));
	nb = 1;
	printf("square root of %d > %d\n", nb, ft_sqrt(nb));
	nb = 1764;
	printf("square root of %d > %d\n", nb, ft_sqrt(nb));
}