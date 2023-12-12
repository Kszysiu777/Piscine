/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbizon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:20:22 by kbizon            #+#    #+#             */
/*   Updated: 2023/11/21 12:20:22 by kbizon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = malloc(sizeof(int) * (size));
		if (!*range)
		{
			*range = 0;
			return (-1);
		}
		while (i < size)
		{
			*range[i] = min + i;
			i++;
		}
		return (size);
	}
}

#include <stdio.h>
int	main()
{
	int min = 6;
	int max = 9;
	int i = 0;
	int *range;

	range = ft_ultimate_range(0, min, max);
	while (i < (max - min))
		printf("%d", range[i++]);
	free(range);
	return(0);
}
