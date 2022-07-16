#include <stdio.h>
int len(char *s)
{
	int i=0;
	while(s[i])
		i++;
	return(i);
}
char *strr(char *str)
{
	int i = 0;
	int l;
	int tmp;
	l = len(str);
	l--;
	 while (l > i)
	 {
		 tmp = str[i];
		 str[i] = str[l];
		 str[l] = tmp;
		 i++;
		 l--;
	 }
	 return (str);
}

int main()
{
	char ss[] = "youssef";
	printf("%s", strr(ss));
}
