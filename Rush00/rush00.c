#include "unistd.h"

void    top_bottom(int x)
{
    int start;

    start = x;
    while (x > 0)
    {
        if (start == x || x - 1 == 0)
        {
            write(1, "o", 1);
            x--;
        }
        else
        {
            write(1, "-", 1);
            x--;
        }
    }
    write(1, "\n", 1);
}

void    middle(int x, int y)
{
    int trial;

    while (y - 2 > 0)
    {   
        trial = x;
        while (trial > 0)
        {
            if (trial == x || trial - 1 == 0)
            {
                write(1, "|", 1);
                trial--;
            }
            else
            {
                write(1, " ", 1);
                trial--;
            }
        }
        write(1, "\n", 1);
        y--;
    }
}

void    rush(int x, int y)
{
    if (y <= 0 || x <= 0)
    {
        write(1, "\n", 1);
    }
    else if (y == 1)
    {
        top_bottom(x);
    }
    else
    {
        top_bottom(x);
        middle(x, y);
        top_bottom(x);
    }
}   

int     main(void)
{
    rush(5, 3);
    rush(5, 1);
    rush(1, 1);
    rush(1, 5);
    rush(4, 4);
    rush(1, 0);
    rush(-1, 0);
}
