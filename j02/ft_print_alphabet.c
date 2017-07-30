#include <unistd.h>

int ft_putchar(char c)
{
	write(1,&c,1);
	return(0);
}

int main()
{
	char i;
	for(i='a'; i<='z'; i++){
		ft_putchar(i);
	}
	return(0);
}

