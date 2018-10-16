#include <unistd.h>

int ft_putchar(char c)
{
write(1,&c,1);
return(0);
}


void ft_print_comb(void)
{

int a;
int b;
int c;

a = '0';
b = '1';
c = '2';

while (a <= '9')
{
	while (b <= '9')
	{
		while (c <= '9')
		{
			if (a < b && b < c && a < c)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(',');
			}
			c = c + 1;
		}
		c = 0;
		b = b + 1;
	}
	b = 0;
	a = a + 1;
} 		

}


int main(void)
{
ft_print_comb();
return(0);
}

	
