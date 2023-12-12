/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbizon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:20:22 by kbizon            #+#    #+#             */
/*   Updated: 2023/11/21 12:20:22 by kbizon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 0;
	while (res <= nb && res <= 46340)
	{
		if (res * res == nb)
		{
			return (res);
		}
		res++;
	}
	return (0);
}

// int main()
// {	
// 	printf ("%d",ft_sqrt(1024));
// }