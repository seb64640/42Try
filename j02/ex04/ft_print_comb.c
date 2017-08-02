#include <unistd.h>

int ft_putchar(char c)
{
        write(1,&c,1);
        return(0);
}
void ft_print_comb(void) 
{
	char c = '0';
	char d = '1';
	char u = '2';
	while (c!='8')
	{
		if(c<d && d<u)
		{
			ft_putchar(c);
			ft_putchar(d);
			ft_putchar(u);
			ft_putchar(' ');
		}
		if(u =='9')
		{
			if(d == '9')
			{
				d = '0';
				c += 1;
			}
			u = '0';
			d += 1;
		}
		u++;
	}
	ft_putchar('\n');
}

int main()	
{
	ft_print_comb();
	return(0);
}
