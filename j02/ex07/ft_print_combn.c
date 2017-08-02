#include <unistd.h>

int ft_putchar(char c)
{
        write(1,&c,1);
        return(0);
}

int  ft_croissant(int n)
{
	int a = n/1%10;
	int b = n/10%10;
	int c = n/100%10;
	int d = n/1000%10;
	int e = n/10000%10;
	int f = n/100000%10;
	int g = n/1000000%10;
	int h = n/10000000%10;
	int i = n/100000000%10;
	if(a > b)	
		return(1);
	else
		return(0);
		
}

void ft_putnbrpos(int nb)
{
        int inv = 0;
        int inv1 = nb;
        int i = 0;
        while(nb > 0)
        {
                i++;
                inv = inv + nb%10;
                inv = inv*10;
                nb = nb - (nb%10);
                nb = nb / 10;
        }
        inv /=10;
        while(i > 0)
        {
                ft_putchar(inv%10+48);
                inv = inv - inv%10;
                inv /= 10;
                i--;
        }
        ft_putchar('\n');
}


void ft_print_combn(int n)
{
	int i = 1; 
	int pui = 10;
	while(i < n)
	{
		pui *= 10;
		i++;
	}
	i = 0;
	while(i < pui)
	{
		if(ft_croissant(i))
		{	
			ft_putnbrpos(i);
		}
		i++;
	}
	ft_putchar('\n');
}

int main()
{
	ft_print_combn(9);
	return(0);
}
