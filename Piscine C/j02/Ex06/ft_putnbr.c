#include <unistd.h>

int ft_putchar(char c)
{
write (1,&c,1);
return(0);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int main(void)
{
ft_putnbr(0);
return(0);
}
