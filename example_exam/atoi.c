#include<stdio.h>

int at(const char *s)
{
	int r = 0;
	int n=1;
	int i= 0;
	
	 while(s[i] <= 32)
		 i++;
	 if(s[i] == '-')
	 {
		 n = -1;
		 i++;
	 }
	 else if(s[i] == '+')
		 i++;
	 while(s[i] && s[i] >= '0' && s[i] <= '9')
	 {
		 r *= 10 ;
		 r += s[i] - 48;
		 i++;
		 
	 }
	 return (r * n);

}
int main()
{
	printf("%d", at("---+--+1234ab567"));
}
