/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 16:00:27 by asilveir          #+#    #+#             */
/*   Updated: 2024/10/04 17:48:42 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*str_space;
	int		i;

	i = 0;
	str_space = (char *)malloc(ft_strlen(str) * sizeof(char));
	while (str[i])
	{
		str_space[i] = str[i];
		i++;
	}
	str_space[i] = '\0';
	return (str_space);
}
