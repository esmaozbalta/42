/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:33:43 by esozbalt          #+#    #+#             */
/*   Updated: 2024/03/03 18:35:36 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *buffer)
{
	char	*str;
	int		bytes_read;

	bytes_read = 1;
	str = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (!ft_strchr(buffer, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, str, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(str);
			free(buffer);
			return (0);
		}
		str[bytes_read] = '\0';
		buffer = ft_strjoin(buffer, str);
	}
	free(str);
	return (buffer);
}

char	*ft_line(char *buffer)
{
	int		i;
	char	*str;

	i = 0;
	if (buffer[i] == 0)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		str = malloc(sizeof(char) * (i + 2));
	else
		str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (buffer[++i] && buffer[i] != '\n')
		str[i] = buffer[i];
	if (buffer[i] == '\n')
		str[i++] = '\n';
	str[i] = '\0';
	return (str);
}

char	*ft_newline(char *buffer)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	str = malloc(sizeof(char) * ft_strlen(buffer) - i + 1);
	if (!str)
		return (NULL);
	i++;
	while (buffer[i])
		str[j++] = buffer[i++];
	str[j] = '\0';
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_newline(buffer);
	return (line);
}
//sondan 1 onceki
#include <fcntl.h>
#include <stdio.h>
/*
int main()
{
	char *line[10];
	int len = 0;
	int count = 0;	
	int fd = open("a.txt", O_CREAT | O_RDWR, 777);

	while((line[len] = get_next_line(fd)) != NULL) //dosyadaki satir sayisini len de tutar
	{
		len++;
		//free(line); // ust uste malloc acmaya calisirsa leaks olur
	}
	len--;
	printf("%s", line[len - 1]);
	/*
	close(fd); //kapatir ve dosya basa sarar
	fd = open("a.txt", O_CREAT | O_RDWR, 777);
	while ((line = get_next_line(fd)) != NULL)
	{
		count++;
		if (count == (len - 1)) //sondan onceki olunca yazdirir
			printf("%s", line);
		free(line);
	}*/
	//system("leaks a.out");
}
/*
int main()
{
	char *line;
	int fd = open("b.txt", O_CREAT | O_RDWR, 777);
	int fd1 = open("c.txt", O_CREAT | O_RDWR, 777);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	printf("\n");
	while ((line = get_next_line(fd1)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	system("leaks a.out");
}
int main()
{
 	int fd;
 	fd=open("ilkkus.txt",O_CREAT | O_RDWR, 777);
 	int i=0;
	char *str[10];
 	str[i]=get_next_line(fd);
 	while(str[i])
 	{
 		i++;
 		str[i]=get_next_line(fd);
 	}
 	while (--i>=0)
 	{
 		printf("%s",str[i]);
		if (i != 0)
			printf("\n");
 	}
}
*/
