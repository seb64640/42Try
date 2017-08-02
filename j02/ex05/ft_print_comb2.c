#include <unistd.h>

int ft_putchar(char c)
{
        write(1,&c,1);
        return(0);
}
void ft_print_comb2(void)
{
        char dd = '0';
        char du = '0';
        char ud = '0';
	char uu = '1';

        while (dd!='9'+1)
        {
                if(du<uu && dd<=ud)
                {
                        ft_putchar(dd);
                        ft_putchar(du);
                        ft_putchar(' ');
                        ft_putchar(ud);
			ft_putchar(uu);
			ft_putchar(',');
		//	ft_putchar(' ');
                }
                if(uu =='9')
                {
                        if(ud == '9')
                        {
				if(du == '9')
				{
					du ='0'-1;
					dd++;
				}
                                ud = '0'-1;
                                du += 1;
                        }
                        uu = '0';
                        ud += 1;
                }
		else 
		{
			uu++;
		}
        }
        ft_putchar('\n');
}

int main()
{
	ft_print_comb2();
}
