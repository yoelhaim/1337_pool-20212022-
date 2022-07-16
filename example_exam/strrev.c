#include<unistd.h>
int ll(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
void ff(char *s)
{
	int i = 0;
	int l;
	int temp;

	l = ll(s);
	while (i < l / 2)
	{
		temp = s[i];
		s[i] = s[l - i -1];
		s[l - i -1] = temp;
		i++;
	}
}
void ss(char *s)
{
	int i =0;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
int main( int ac , char **av)
{
	int i = 0;
	int temp;
	int l;
	if(ac == 2)
	{
		l = ll(av[1]);
		l --;
		while (i < l)
		{
			temp = av[1][i];
			av[1][i] = av[1][l];
			av[1][l] = temp;
			i++;
			l--;
		}
		ss(av[1]);
	}
}
