#include <unistd.h>
void str(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i],1);
		i++;
	}
}
int stlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}
int main(int ac , char **av)
{
	int i = 0;
	int i2= 0;
	int len;
	if(ac == 3)
	{
		while (av[1][i] )
		{
			while (av[2][i2])
			{
				if(av[1][i] == av[1][i2])
				{
					len++;
					break;
				}
				i2++;
			}
			i++;
		}
		if(len == stlen(av[1]))
		{
			str(av[1]);
		}
	}
}
