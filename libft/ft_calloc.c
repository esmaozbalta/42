
#include "libft.h" //?

void	*ft_calloc(size_t count, size_t size)
{
	void	*p; //istedigi veri tipine donusturulebilir

	p = malloc(count * size); //bellekte yer ayirir //count adet size ise byte
	if (!p) //eger yer ayrilmazsa null dondurur
	{
		return (NULL);
	}
	ft_bzero(p, (count * size)); //ayrilan yer 0 ile doldurulur
	return (p);
}
int main(void)
{
    int *ip;

    ip = (int *)calloc(2, sizeof(int)); //int turunun byte boyutu

	*ip = 5;
	printf("%p adresindeki değer: %d\n", ip, *ip);
	printf("%p adresindeki değer: %d\n", ip+1, *ip+1);
    free(ip);
}

/*
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