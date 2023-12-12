/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbizon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:20:22 by kbizon            #+#    #+#             */
/*   Updated: 2023/11/17 12:20:22 by kbizon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main ()
// {
// 	char test[7] = {'a','m','o','g','u','s'};
// 	char blanc[7] = {' ',' ',' ',' ',' ',' '};
// 	ft_strcpy(blanc, test);
// 	write(1, test, 7);
// 	write(1, "\n", 1);
// 	write(1, blanc, 7);
// }
