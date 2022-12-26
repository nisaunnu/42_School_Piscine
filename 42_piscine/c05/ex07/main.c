#include <stdio.h>

int	ft_find_next_prime(int nb);

int main()
{
	int nb;

	nb = 42;
	printf("prime number closest to %d > %d", nb, ft_find_next_prime(nb));
}