/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:47:31 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/17 14:47:36 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
	{
		return (NULL);
	}
	ft_bzero(p, (count * size));
	return (p);
}
/*
int main(void)
{
    int *ip;

    ip = ft_calloc(2, sizeof(int)); //int turunun byte boyutu
	//*ip = 5;
	
	printf("%p adresindeki değer: %d\n", ip, *ip);
	//printf("%p adresindeki değer: %d\n", ip+1, *ip+1);
    free(ip);
}

//bellekte yer ayirir count adet size ise byte-19

int main(void)
{
    int *ip, id;

    ip = (int *) calloc(10, sizeof(int));

    for (id=0; id<10; id++) 
	{
        *(ip+id) = (id+1) * 5;
        printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
    }

    free(ip);
}
Her birinin boyutu byte olarak ifade edilen ve size 
parametre değeri kadar olan bellekten num parametre değeri 
kadar sayıda bellek bloğunu tahsis eder ve tahsis edilen 
belleğin tamamını sıfır değeri ile doldurur.

Tahsis edilen bellek bloğunun başlangıç adresini
gösteren bir işaretçi geri döndürür.
Başarı durumunda tahsis edilen belleğin 
başlangıç adresini geri döndürür. Bellek sorunlarını 
engellemek için, gerekli işlemler yapıldıktan sonra,
bu işaretçi free() 
veya realloc() fonksiyonu ile boşaltılmalıdır.
*/
