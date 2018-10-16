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

for (a = '0'; a <= '9'; a++) {
	for (b = '1'; b <= '9'; b++) {
		for (c = '2'; c <= '9'; c++) {
		if (a < b && a < c && b < c)
		{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		}

						}
					}
				}
}




int main(void)
{
ft_print_comb();
return(0);
}
