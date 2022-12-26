/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:35:46 by nunnu             #+#    #+#             */
/*   Updated: 2022/10/30 13:45:55 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	if (ac >= 1)
	{
		while (av[j])
		{
            i = 0;
			while (av[j][i])
			{
				write (1, &av[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
	}
	return (0);
}