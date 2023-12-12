/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbizon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:20:22 by kbizon            #+#    #+#             */
/*   Updated: 2023/11/21 12:20:22 by kbizon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *dest;
	int i;
	int	j;
	int x;

	dest = malloc(sizeof(strs) + (sizeof(sep) * (size - 1)));
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			dest[x++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				dest[x++] = sep[j++];
			}
		}
		i++;
	}
	dest[x] = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char *strs[] = {"bajojajo", "polska gurom", "o cholera czy to fredi fazber el el elel el"};
	char *sep = " | ";
	char *join = ft_strjoin(3, strs, sep);
	if (join)
	{
		printf ("%s", join);
		free (join);
	}
	return (0);
}
