/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbizon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:20:22 by kbizon            #+#    #+#             */
/*   Updated: 2023/11/21 12:20:22 by kbizon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int *tab;

	i = min;
	if (min >= max)
	{
		tab = 0;
		return (0);
	}
	else
	{
		tab = malloc(sizeof(int) * (max - min));	
	}
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	return (tab);
}

#include <stdio.h>
int	main()
{
	int min = 6;
	int max = 9;
	int i = 0;
	int *range;

	range = ft_range(min, max);
	while (i < (max - min))t
		printf("%d ", range[i++]);
	free(range);
	return(0);
}
