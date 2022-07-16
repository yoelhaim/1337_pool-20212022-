#include <unistd.h>
int chdb(char *str , char c, int pos)
{
	 int i = 0;
	 while (i < pos)
	 {
		 if(str[i] == c)
			 return 0;
		 i++;
	 }
	 return 1;
}
int main(int ac, char **av)
{
	int i = 0;
	int i2;
	if(ac == 3)
	{
		while (av[1][i])
		{
			i2 = 0;
			while(av[2][i2])
			{
				if(av[1][i]== av[2][i2])
				{
				if(chdb(av[1],av[1][i], i))
				{
					write (1, &av[1][i],1);
					break;
				}
			}
			i2++;
		}
			i++;
		}
	}
}
