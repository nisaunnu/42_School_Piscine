/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:11:09 by nunnu             #+#    #+#             */
/*   Updated: 2022/10/16 02:05:48 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	right = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_putchar((left / 10) + '0');
			ft_putchar((left % 10) + '0');
			ft_putchar(' ');
			ft_putchar((right / 10) + '0');
			ft_putchar((right % 10) + '0');
			if (left != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			right++;
		}
		left++;
	}
}