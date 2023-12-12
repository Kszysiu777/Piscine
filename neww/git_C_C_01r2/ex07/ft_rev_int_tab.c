/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbizon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:41:51 by kbizon            #+#    #+#             */
/*   Updated: 2023/11/15 22:41:51 by kbizon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp[size];
	int*	k[sizeof(tab)];
	*k = size;

	i = 0;
	while (i < size)
	{
		temp[k-1] = tab[i];
		k--;
		i++;
	}
	*tab = temp;
}
