#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main()
{
	int nb;

	nb = 4;
	printf("%d! = %d\n", nb, ft_recursive_factorial(nb));
	nb = -4;
	printf("(%d)! = %d", nb, ft_recursive_factorial(nb));
}