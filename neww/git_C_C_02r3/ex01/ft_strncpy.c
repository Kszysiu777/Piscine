/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                      :+:      :+:     :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbizon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:20:22 by kbizon            #+#    #+#             */
/*   Updated: 2023/11/17 12:20:22 by kbizon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main ()
// {
// 	char test[7] = {'b','i','n','1','2','3'};
// 	char blanc[7] = {'a','m','o','g','u','s'};
// 	unsigned int n;

// 	n = 3;
// 	write(1, test, 6);
// 	write(1, "\n", 1);
// 	write(1, blanc, 6);
// 	write(1, "\n", 1);
// 	ft_strncpy(blanc, test, n);
// 	write(1, "\n", 1);
// 	write(1, test, 6);
// 	write(1, "\n", 1);
// 	write(1, blanc, 6);
// }
