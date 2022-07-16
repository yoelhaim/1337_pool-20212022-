char *ft_strcpy(char *dest ,char *src)
{
	int i =0;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main()
{
	char d[10];
	char s[]= "youssef";
	printf("%s", ft_strcpy(d,s));
}
