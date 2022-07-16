#include <stdio.h>
int at(const char *s)
{
	int r = 0;
	int n=1;
	int i= 0;
	
	 while(s[i] <= 32 || s[i] >= 127 )
		 i++;
	 while (s[i] == '-' || s[i] == '+' )
	 {
		 if(s[i] == '-')
		 {
			 n = n* -1;
			
		 }
		 i++;
	 }
	 while(s[i] && s[i] >= '0' && s[i] <= '9')
	 {
		 r *= 10 ;
		 r += s[i] - 48;
		 i++;
		 
	 }
	 return (r * n);

}
int main(int ac ,char **av)
{
	printf("%d", at(av[1]));
}
