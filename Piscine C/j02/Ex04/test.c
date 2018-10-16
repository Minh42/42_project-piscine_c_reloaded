#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    count(void)
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
                putchar(a);
                putchar(b);
                putchar(c);
                putchar(' ');
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a;
    }
}

int     main(void)
{
    count();
    return (0);
}
