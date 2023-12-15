
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
	{
		return (NULL);
	}
	slen = ft_strlen(s);
	if (slen < start)
	{
		return (ft_strdup(""));//bos string
	}
	slen = ft_strlen(s + start); // s in start dan itibaren uzunlugu
	if (slen < len)
	{
		len = slen;
	}
	substr = (char *)malloc (sizeof(char) * len + 1);//null +1
	if (!substr)
	{
		return (NULL);
	}
	ft_strlcpy(substr, s + start, len + 1); //s i startdan itibaren len uzunlugunda substr ye kopyalar
	return (substr);
}
int main()
{
  char cdizi[] = "Karakter dizisi içinde işlem";

  /* 9 değeri karakter dizisi içinde 0'dan başlayarak verilir ve 10.karaktere karşılık gelir. */
  char* substr = ft_substr(cdizi, 2, 6);

  printf("%s\n", substr);

  /* Fonksiyon içinde tahsis edilen dinamik belleği boşaltma */
  free(substr);

  return 0;
}