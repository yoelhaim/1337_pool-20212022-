#include <unistd.h>
int chkd2(char *str, char c)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return 0;
		i++;
	}
	return 1;
}
int chkd1(char *str, char c, int pos)
{
	int i =0;
	while (i < pos)
	{
		if(str[i] == c)
			return 0;
		i++;
	}
	return 1;
}
int main(int ac , char **av)
{
	int rr;
	int i =0;
	if(ac == 3)
	{
		while(av[1][i])
		{
			if(chkd1(av[1], av[1][i], i))
				write(1, &av[1][i],1);
			i++;
		}
		i = 0;
		while(av[2][i])
		{
			if(chkd2(av[1], av[2][i]))
			{
				if(chkd1(av[2], av[2][i],i))
					write(1, &av[2][i],1);
			}
			i++;
		}
	}
}

