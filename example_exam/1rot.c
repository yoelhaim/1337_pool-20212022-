#include <unistd.h>
int main(int ac,char **av)
{
	int i = 0;
	char temp;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'y')
			{
				temp = av[1][i] +1;
				write (1, &temp, 1);
			}
			else if (av[1][i] == 'Z' || av[1][i] == 'z')(av[1][i] == 'z')? write(1, "a",1): write(1, "A",1);
			else
				write(1, &av[1][i],1);
			i++;
		}
	}
}
