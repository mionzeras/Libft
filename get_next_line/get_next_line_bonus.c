/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampos- <gcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:15:45 by gcampos-          #+#    #+#             */
/*   Updated: 2023/06/15 13:32:00 by gcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_read_txt(int fd, char *str)
{
	char	*buffer;
	int		qtd_bytes;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	qtd_bytes = 1;
	while (!get_strchr(str, '\n') && qtd_bytes != 0)
	{
		qtd_bytes = read(fd, buffer, BUFFER_SIZE);
		if (qtd_bytes == -1)
		{
			free(buffer);
			free(str);
			return (NULL);
		}
		buffer[qtd_bytes] = '\0';
		str = get_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str[fd] = get_read_txt(fd, str[fd]);
	if (!str[fd])
		return (NULL);
	line = ft_get_line(str[fd]);
	str[fd] = keep_rest(str[fd]);
	return (line);
}
