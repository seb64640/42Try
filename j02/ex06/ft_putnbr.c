#include <unistd.h>

int ft_putchar(char c)
{
        write(1,&c,1);
        return(0);
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
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

int main()
{
	ft_putnbr(6858000);
	ft_putnbr(-578064);
	ft_putnbr(298050709);
        return(0);
}
