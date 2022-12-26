/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:17:56 by nunnu             #+#    #+#             */
/*   Updated: 2022/12/27 00:19:01 by nunnu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putchar(char c);

int	main(void)
{
    rush(5, 3);
    ft_putchar('\n');
    rush(5, 1);
    ft_putchar('\n');
    rush(1, 1);
    ft_putchar('\n');
    rush(1, 5);
    ft_putchar('\n');
    rush(4, 4);
    return(0);
}
