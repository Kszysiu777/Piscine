/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
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

char *ft_strdup(char *src)
{
	char *dest;
	int len;
	int	i;

	len = 0;
	i = 0;
	while (src[len])
	{
		len++;
	}
	dest = malloc(len + 1);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char text[] = "bajojajo";
	char *dup;
	dup = ft_strdup(text);
	printf ("OG %s", text);
	printf ("\nCOPY %s", dup);
	free (dup);
	return (0);
}
