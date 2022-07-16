#include <unistd.h>
int strl(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
int main(int ac, char **av)
{
	int i = 0;
	int l;
	if(ac == 2)
	{
		l = strl(av[1]);
		while(l--)
		{
			write(1, &av[1][l], 1);
				i++;
		}
		
	}
}
