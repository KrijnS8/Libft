/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_next_line.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kschelvi <kschelvi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 15:50:47 by kschelvi      #+#    #+#                 */
/*   Updated: 2023/11/01 15:50:51 by kschelvi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_get_next_line.h"
#define MAX_FD 1024
#define BUFFER_SIZE 32

static bool	ft_add_to_line(char **line, char *buffer)
{
	char	*tmp;

	tmp = ft_gnl_strjoin(*line, buffer);
	if (tmp == NULL)
		return (false);
	free(*line);
	*line = tmp;
	return (true);
}

static char	*ft_add_to_line_newline(char **line, char *buffer, \
								char **remainder, int fd)
{
	char	*tmp;
	char	*substr;
	char	*ptr;

	ptr = ft_strchr(buffer, '\n') + 1;
	remainder[fd] = ft_gnl_strdup(ptr, ft_strlen(ptr));
	if (remainder[fd] == NULL)
		return (NULL);
	substr = ft_substr(buffer, 0, ft_strchr(buffer, '\n') - buffer + 1);
	if (substr == NULL)
		return (NULL);
	tmp = ft_gnl_strjoin(*line, substr);
	if (tmp == NULL)
		return (free(substr), NULL);
	free(*line);
	free(substr);
	free(buffer);
	*line = tmp;
	return (*line);
}

static char	*ft_init_buffer(char **buffer, char **remainder, \
						size_t *bytes_read, int fd)
{
	if (remainder[fd] != NULL)
	{
		*buffer = ft_gnl_strdup(remainder[fd], (size_t)BUFFER_SIZE);
		if (*buffer == NULL)
			return (free(remainder[fd]), NULL);
		free(remainder[fd]);
		remainder[fd] = NULL;
		*bytes_read = 1;
	}
	else
	{
		*buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (*buffer == NULL)
			return (NULL);
		*bytes_read = read(fd, *buffer, BUFFER_SIZE);
		if ((int)*bytes_read < 0)
			return (free(*buffer), NULL);
		(*buffer)[*bytes_read] = '\0';
	}
	return (*buffer);
}

char	*ft_get_next_line(int fd)
{
	static char	*remainder[MAX_FD] = {NULL};
	char		*buffer;
	char		*line;
	size_t		bytes_read;

	line = NULL;
	if (ft_init_buffer(&buffer, remainder, &bytes_read, fd) == NULL)
		return (NULL);
	while (bytes_read > 0 && ft_strchr(buffer, '\n') == NULL)
	{
		if (!ft_add_to_line(&line, buffer))
			return (NULL);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if ((int)bytes_read < 0)
			return (free(buffer), free(line), NULL);
		buffer[bytes_read] = '\0';
	}
	if (ft_strchr(buffer, '\n') != NULL)
		return (ft_add_to_line_newline(&line, buffer, remainder, fd));
	if (!ft_add_to_line(&line, buffer))
		return (free(buffer), free(remainder[fd]), NULL);
	if (*line == '\0' && remainder[fd] == NULL)
		return (free(buffer), free(line), NULL);
	return (free(buffer), line);
}

/* #include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int fd = open("./my_file.txt", O_RDONLY);
	char	*line;

	line = ft_get_next_line(fd);
	printf("%s", line);
	while (line != NULL)
	{
	 	printf("%s", line);
		free(line);
		line = ft_get_next_line(fd);
	}
}
 */