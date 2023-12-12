/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:08:58 by mburova           #+#    #+#             */
/*   Updated: 2023/11/19 20:37:48 by mburova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (x > 0 && y > 0 && row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 || col == x) && (row == 1 || row == y))
				ft_putchar('o');
			else if ((col > 1 && col < x) && (row == 1 || row == y))
				ft_putchar('-');
			else if ((col == 1 || col == x) && (row > 1 && row < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
