#include <stdio.h>

int	ft_fibonacci(int index);

int main()
{
	int index;

	index = -2;
	printf("%dth number in the fibonacci sequence: %d\n", index, ft_fibonacci(index));
	index = 0;
	printf("%dth number in the fibonacci sequence: %d\n", index, ft_fibonacci(index));
	index = 2;
	printf("%dth number in the fibonacci sequence: %d\n", index, ft_fibonacci(index));
	index = 15;
	printf("%dth number in the fibonacci sequence: %d", index, ft_fibonacci(index));
}