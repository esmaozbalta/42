/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:37:55 by esozbalt          #+#    #+#             */
/*   Updated: 2024/03/03 19:07:12 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *buffer)
{
	char	*str;
	int		bytes_read;

	bytes_read = 1;
	str = malloc((BUFFER_SIZE + 1) * sizeof(char)); //str ye yer ayırır +1 NULL
	if (!str)
		return (NULL);
	while (!ft_strchr(buffer, '\n') && bytes_read != 0) //döngüde \n bulunana ve bytes read 0 olana kadar devam et
	{
		bytes_read = read(fd, str, BUFFER_SIZE); //fd deki metnin buffer kadarını okuyup str ye atar
		if (bytes_read == -1) //hata durumı
		{
			free(str);
			free(buffer);
			return (0);
		}
		str[bytes_read] = '\0'; //sona null 
		buffer = ft_strjoin(buffer, str); //str yi buffer a atar;
	}
	free(str);
	return (buffer); //güncel bufferı döndürür
}

char	*ft_line(char *buffer)
{
	int		i;
	char	*str;

	i = 0;
	if (buffer[i] == 0)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n') //null veya newline bulana kadar arttır
		i++;
	if (buffer[i] == '\n')
		str = malloc(sizeof(char) * (i + 2)); //\n den sonra null da olacağı için 2
	else
		str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (buffer[++i] && buffer[i] != '\n')
		str[i] = buffer[i]; //buffer ı str ye kopyalar
	if (buffer[i] == '\n') //eğer sonda \n varsa str ye de ekle
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
	while (buffer[i] && buffer[i] != '\n') //newline  bulana kadar arttır
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	str = malloc(sizeof(char) * ft_strlen(buffer) - i + 1); // str buffer içinde \n den sonrası için yer ayıırır
	if (!str)
		return (NULL);
	i++; //newline atlanır
	while (buffer[i])
		str[j++] = buffer[i++]; // \n den sonrası str ye atılır
	str[j] = '\0';
	free(buffer);
	return (str);
}
// ft_read da okuduğumuz 10 baytlık kısımda eğer \n var ise bunu ft_line da kontrol ediyor

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read(fd, buffer); //dosyadan okunan veriyi buffer a ekler
	if (!buffer)
		return (NULL);
	line = ft_line(buffer); // \n ye kadar olan kısmı line a atar
	buffer = ft_newline(buffer); // 
	return (line);
}

#include <stdio.h>
#include <fcntl.h>
int main()
{
	char *str;
	int bytes_read;
	int fd = open("a.txt", O_CREAT | O_RDWR, 0644);
	//char *b = get_next_line(fd);
	//char *c = get_next_line(fd);
	str = malloc((BUFFER_SIZE + 1) * sizeof(char));
	bytes_read = read(fd, str, BUFFER_SIZE);
	printf("%d", bytes_read);
	printf("%s", str);
	//system("leaks a.out");
}