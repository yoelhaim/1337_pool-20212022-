#include <stdio.h>
#include <string.h>
int ss(char *s1, char *s2)
{
int i = 0;
while(s1[i] != '\0' && s2[i] && s1[i] == s2[i] )
	i++;
return (s1[i] - s2[i]);

}
int main()
{
	char s1[] = "aoussef";
	char s2[] = "nousset";
	int hh = ss(s1,s2);
	printf("%d", hh);
}
