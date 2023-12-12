/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbizon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:20:22 by kbizon            #+#    #+#             */
/*   Updated: 2023/11/21 12:20:22 by kbizon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
	int	res;
	int i;
	int eve;
	int odd;

	res = 0;
	eve = 0;
	odd = 1;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	i = 2;
	while (i < index)
	{
		if (i % 2 == 0)
		{
			eve += odd;
		}
		else
		{
			odd += eve;
		}
		i++;
	}
	res = eve + odd;
	return (res);
}

int main()
{	
	printf ("%d",ft_fibonacci(2));
}
