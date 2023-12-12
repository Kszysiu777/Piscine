/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 07:47:35 by mburova           #+#    #+#             */
/*   Updated: 2023/11/19 13:37:06 by mburova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (col == 1 && row == 1)
				ft_putchar('/');
			else if ((col == 1 && row == y) || (col == x && row == 1))
				ft_putchar('\\');
			else if (col == x && row == y)
				ft_putchar('/');
			else if ((row > 1 && row < y) && (col > 1 && col < x))
				ft_putchar(' ');
			else
				ft_putchar('*');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
