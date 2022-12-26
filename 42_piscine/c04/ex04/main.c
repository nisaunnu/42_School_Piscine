#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(208, "0123456789");
	printf("\n");
	ft_putnbr_base(156, "0123456789abcdef");
	printf("\n");
}
