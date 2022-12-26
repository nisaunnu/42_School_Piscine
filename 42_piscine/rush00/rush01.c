void ft_putchar (char c);

void rush (int x, int y)
{
    int a;
    int b;

    x--;
    y--;
    b = 0;
    while (b < y + 1)
    {
        a = 0;
        while (a < x + 1)
        {
            if ((b == 0 && a == 0) || (b == y && a == x) && y != 0 && x != 0)
                ft_putchar('/');
            else if ((a == x && b == 0) || (b == y && a == 0))
                ft_putchar('\\');
            else if (b == 0 || b == y || a == x || a == 0)
                ft_putchar('*');
            else
                ft_putchar(' ');
            a++;
        }
        b++;
        ft_putchar('\n');
    }
}