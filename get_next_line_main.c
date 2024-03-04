/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itulgar < itulgar@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:25:14 by itulgar           #+#    #+#             */
/*   Updated: 2024/01/12 13:57:06 by itulgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fcntl.h>
// #include <stdio.h>
// dosyadan sondan bir öncekini veren get_next_line.c
// int	main(void)
// {
// 	char *line;
// 	int fd;
// 	int count;
// 	int len;

// 	count = 0;
// 	len = 0;
// 	fd = open("ilkkus.txt", O_RDONLY, 777);
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		len++;
// 		free(line);
// 	}
// 	close(fd);
// 	// printf("len:%d\n", len);
// 	fd = open("ilkkus.txt", O_RDONLY, 777);

// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		count++;
// 		if (count == (len - 1))
// 			printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	// system("leaks a.out");
// }

// #include <fcntl.h>
// #include <stdio.h>
// dosya açarak tekli okuma get_next_line.c
// int	main(void)
// {
// 	char *line;
// 	int fd;

// 	fd = open("ilkkus.txt", O_RDONLY, 777);

// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	// system("leaks a.out");
// }
// bonus
// getconf OPEN_MAX
// 10240
// aynı anda ne kadar

// #include <fcntl.h>
// #include <stdio.h>
// dosya açayıp kapatarak kullanma iki dosyayı sırayla okuma
// int	main(void)
// {
// 	char *line;
// 	int fd;
// 	int fd1;

// 	fd = open("ilkkus.txt", O_RDONLY, 777);
//  	fd1 = open("erman.txt", O_RDONLY, 777);

// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	printf("\n");
// 	while ((line = get_next_line(fd1)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd1);
// }

// #include <fcntl.h>
// #include <stdio.h>
// double pointerla tersten okuma tek dosya get_next_line.c
// int main()
// {
// 	int fd;
// 	fd=open("ilkkus.txt",O_RDONLY);
// 	int i=0;
// 	char *str[9];
// 	str[i]=get_next_line(fd);
// 	while(str[i])
// 	{
// 		i++;
// 		str[i]=get_next_line(fd);
// 	}
// 	while (--i>=0)
// 	{
// 		printf("%s",str[i]);
// 	}

// }

// double pointerla tutarak gezme tek dosyada get_next_line.c
// #include <fcntl.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int		fd;
// 	int		i;
// 	char	*str[256];

// 	fd = open("ilkkus.txt", O_RDONLY);
// 	i = 0;
// 	str[i] = get_next_line(fd);
// 	while (str[i])
// 	{
// 		printf("%s", str[i]);
// 		i++;
// 		str[i]=get_next_line(fd);
// 	}
// 	close(fd);
// }

// get_next_line_bonus 2 dosyayı sırayla düzden  bitirip okuyor
// int	main(void)
// {
// 	char *line;
// 	char *line1;

// 	int fd;
// 	int fd1;
// 	//int i=0;

// 	fd = open("ilkkus.txt", O_RDONLY, 777);
// 	fd1 = open("erman.txt", O_RDONLY, 777);

// 	while (1)
// 	{
// 		line = get_next_line(fd);
// 		line1 = get_next_line(fd1);
// 		if (!line && !line1)
// 			break ;
// 		printf("%s\n", line);
// 		printf("%s\n",line1);
// 		free(line);
// 		free(line1);
// 	}
// 	close(fd);
// 	// system("leaks a.out");
// }

// tersten iki dosyayı sırayla okuma get_next_line_bonus.c

// int main()
// {
// 	int fd;
// 	int fd1;
// 	fd=open("ilkkus.txt",O_RDONLY);
// 	fd1=open("erman.txt",O_RDONLY);

// 	int i=0;
// 	char *str[9];
// 	str[i]=get_next_line(fd);
// 	while(str[i])
// 	{
// 		i++;
// 		str[i]=get_next_line(fd);
// 	}
// 	str[i]=get_next_line(fd1);
// 	while(str[i])
// 	{
// 		i++;
// 		str[i]=get_next_line(fd1);
// 	}
// 	while (--i>=0)
// 	{
// 		printf("%s",str[i]);
// 	}

//}

// double pointerla  get_next_line.c de çalıştırma tek dosya okuma
// #include <fcntl.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int		fd;
// 	int		i;
// 	char	*str[256];

// 	fd = open("ilkkus.txt", O_RDONLY);
// 	i = 0;
// 	str[i] = get_next_line(fd);
// 	while (str[i])
// 	{
// 		printf("%s", str[i]);
// 		i++;
// 		str[i]=get_next_line(fd);

// 	}

// 	close(fd);
// 	//system("leaks a.out");
// }
///düzden hepsini okuyup dosyaya yazdırma
// int	main(void)
// {
// 	int fd;
// 	int fd1;
// 	fd = open("ilkkus.txt", O_RDWR);
// 	fd1 = open("erman.txt", O_RDWR);
// 	char *str[245];
// 	int i = 0;
// 	str[i] = get_next_line(fd);
// 	while (str[i])
// 	{
// 		i++;
// 		str[i] = get_next_line(fd);
// 	}

// 	str[i]=get_next_line(fd1);
// 	while (str[i])
// 	{
// 		i++;
// 		str[i] = get_next_line(fd1);
// 	}
// 	int fd3;
// 	fd3=open("ilknur.txt",O_CREAT | O_RDWR,777);
// 	int j=0;
// 	while(str[j])
// 	{
// 		write(fd3,str[j],ft_strlen(str[j]));
// 		j++;
		
// 	}
// 	close(fd);
// 	close(fd1);
// 	 system("leaks a.out");
// }