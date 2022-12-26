#include <stdio.h>

int	ft_is_prime(int nb);

int main()
{
	int nb;

	nb = 7;
	printf("number %d prime > %d\n", nb, ft_is_prime(nb));
	nb = 42;
	printf("number %d prime > %d", nb, ft_is_prime(nb));
}