#include <unistd.h>
int len(char *str)
{
	int i=0;
	while (str[i])
		i++;
	return(i);
}
int main(int ac , char **av)
{
	int i = 0;
	int l;
	if (ac == 2)
	{
		l = len(av[1]);
		while (l--)
		{
			write(1, &av[1][l], 1);
			i++;
		}
	}
}
