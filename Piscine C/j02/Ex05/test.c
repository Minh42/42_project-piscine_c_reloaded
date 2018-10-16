#include <unistd.h>

int ft_putchar (char c)
{
  write(1,&c,1);
  return(0);
}

void ft_print_comb2(void)
{
  int a;
  int b;
  int c;
  int d;
  
  a='0';
  b='0';
  c='0';
  d='1';
  
  while(a <= '9')
  {
    while(b <= '9')
    {
      while(c <= '9')
      {
        while(d <= '9')
        {
            ft_putchar(a);
            ft_putchar(b);
            ft_putchar(' ');
            ft_putchar(c);
            ft_putchar(d);
            ft_putchar(',');
            d++;
        }
        c++;
        d = '0';
      
      }
      b++;
      c = a;
      d = b + 1;
  
    }
    a++;
    b = '0';
    c = a;
    d = c + 1;
  
  }
  
}

int main(void)
{
  ft_print_comb2();
  return(0);
}

