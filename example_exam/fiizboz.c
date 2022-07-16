#include <unistd.h>
void putnbr(int nb)
{
	int c;
	if(nb < 0)
	{
		write(1, "-",1);
		nb = -nb;
	}
	if(nb < 10)
	{
		c = nb + 48;
		write(1, &c,1);
	}
	else{
		putnbr(nb /10);
		putnbr(nb % 10);
	}
}
int main()
{
	int i = 1;
	while(i <= 100)
	{
	if(i % 3 == 0 && i % 5 == 0)
		write(1, "fizzbuzz\n",9);
	else if(i % 3 == 0)
		write(1, "fizz\n",5);
	else if(i % 5 == 0)
		write(1, "buzz\n",5);
	else
	{
		putnbr(i);
		write(1, "\n",1);
	}
	i++;
	}
}
