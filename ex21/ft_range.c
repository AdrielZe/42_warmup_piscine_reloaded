/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:12:44 by asilveir          #+#    #+#             */
/*   Updated: 2024/10/07 18:15:21 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	if (min == max)
		return (NULL);
	i = 0;
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	while (i < size)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
