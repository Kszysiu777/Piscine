/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbizon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:20:22 by kbizon            #+#    #+#             */
/*   Updated: 2023/11/21 12:20:22 by kbizon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (2);
	}
	if (nb > 1)
	{
		while (i < nb && i < 46341)
		{
			if (nb % i == 0)
			{
				return (ft_find_next_prime(nb + 1));
			}
			i++;
		}
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

// int main()
// {
// 	printf ("%d",ft_find_next_prime(0));
// }
