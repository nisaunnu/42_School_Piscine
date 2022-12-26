/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:03:01 by nunnu             #+#    #+#             */
/*   Updated: 2022/12/17 00:49:58 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*buffer;
	int		*d;

	if (min >= max)
		return (0);
	range = max - min;
	d = (buffer = malloc(range * sizeof(int)));
	if (!d)
		return (0);
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;
    
	min = 7;
	max = 5;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}