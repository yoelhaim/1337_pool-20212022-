int s(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}
char *rev(char *sr)
{
	int i = 0;
	int temp;
	int l;
	l= s(sr);
	l--;
	while (i < l)
	{
		temp = sr[l];
		sr[l] = sr[i];
		sr[i] = temp;
		i++;
		l--;
	}
	return (sr);
}
#include <stdio.h>
int main()
{
	char rr[] = "you";
	printf("%s ",rev(rr) );
}
