/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 09:20:45 by nunnu             #+#    #+#             */
/*   Updated: 2022/10/30 09:53:16 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char	*str)
{
	int	i;
	int	j;
	int	len_base;

	i = 0;
	j = 0;
	len_base = ft_strlen(str);
	if (str [i] == '\0' || len_base == 1)
		return (0);
	while (str [i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 43 || str[i] == 45 || str[i] == 127)
			return (0);
		j = i + 1;
		while (j < len_base)
		{
			if (str [i] == str [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	int		error;
	long	number;

	number = nbr;
	error = ft_check_base(base);
	len_base = ft_strlen(base);
	if (error == 1)
	{
		if (number < 0)
		{
			ft_putchar('-');
			number *= -1;
		}
		if (number < len_base)
			ft_putchar(base [number]);
		if (number >= len_base)
		{
			ft_putnbr_base(number / len_base, base);
			ft_putnbr_base(number % len_base, base);
		}
	}
}
