#include <unistd.h>

int ft_putchar(char c)
{
write (1,&c,1);
return(0);
}

void ft_is_negative(int n)
{
if (n < 0)
{
ft_putchar('N');
}
else if (n >= 0)
{
ft_putchar('P');
}
}

int main(void)
{
ft_is_negative(42);
ft_is_negative(0);
ft_is_negative(-42);
return(0);
}
