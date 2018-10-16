#include <unistd.h>

int ft_putchar(char c)
{
write (1,&c,1);
return(0);
}

void ft_print_comb2(void)
{
	int		a;
	char	u;
	char	d;

	a = 0;
	while (++a < 10000)
	{
		u = a / 100;
		d = a % 100;
		if (u < d)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(48 + u / 10);
			ft_putchar(48 + u % 10);
			ft_putchar(' ');
			ft_putchar(48 + d / 10);
			ft_putchar(48 + d % 10);
		}
	}
}

int main(void)
{
ft_print_comb2();
return(0);
}
