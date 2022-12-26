#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main()
{
	int nb;

	nb = 4;
	printf("%d! = %d\n", nb, ft_iterative_factorial(nb));
	nb = -4;
	printf("(%d)! = %d", nb, ft_iterative_factorial(nb));
}