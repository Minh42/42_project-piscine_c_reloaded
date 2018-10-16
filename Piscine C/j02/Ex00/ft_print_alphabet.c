#include <unistd.h>


int ft_putchar(char c)
{
write (1,&c,1);
return(0);
}


void ft_print_alphabet(void)
{

int i;
i = 97;
while (i < 123)
{
ft_putchar(i);
i = i+1;
}
}

int main(void)
{

ft_print_alphabet();
return(0);

}

