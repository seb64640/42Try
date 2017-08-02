#include <unistd.h>

int ft_putchar(char c)
{
        write(1,&c,1);
        return(0);
}

int main()
{
        char i;
        for(i='0'; i<='9'; i++){
                ft_putchar(i);
        }
        return(0);
}
