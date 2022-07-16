#include <stdio.h>
#include <stdlib.h>
int main(int ac , char **av)
{
	int a = atoi(av[1]), b = atoi(av[3]) ,op =av[2][0], r;
	if(op == '+')
		r = a +b;
	else if (op == '/')
		r = a / b;
	else if(op == '*')
		r = a * b;
	printf ("%d \n", r );

}
