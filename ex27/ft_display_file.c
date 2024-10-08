/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:19:02 by asilveir          #+#    #+#             */
/*   Updated: 2024/10/08 14:24:06 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

void	display_file(int fd)
{
	char	buffer[4096];

	while (read(fd, &buffer, 1) > 0)
	{
		write(1, &buffer, 1);
	}
}

int	main(int argc, char *argv[])
{
	int	fd;

	if (argc < 2)
	{
		write(1, "File name missing.", 18);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		return (1);
	}
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "Error opening the file.", 23);
			return (1);
		}
		display_file(fd);
		close(fd);
	}
	return (0);
}
