/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:48:32 by nunnu             #+#    #+#             */
/*   Updated: 2022/10/30 14:59:41 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac;
    i--;
	while (i > 0)
	{
        j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
	return (0);
}