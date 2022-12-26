#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main()
{
	int nb;
	int power;

	nb = 2;
	power = -4;
	printf("%d^(%d) = %d\n", nb, power, ft_recursive_power(nb, power));
	power = 0;
	printf("%d^(%d) = %d\n", nb, power, ft_recursive_power(nb, power));
	power = 4;
	printf("%d^(%d) = %d", nb, power, ft_recursive_power(nb, power));
}