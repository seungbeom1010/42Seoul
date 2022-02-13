
#include <unistd.h>

void    arr_init(char *arr)
{
    int     index;

    index = 0;
    while (index < 16)
    {
        arr[index] = '0';
        index++;
    }
}

void    print_addr(unsigned long long str)
{
    char    *hex;
    char    arr[16];
    int     size;

    size = 16;
    hex = "0123456789abcdef";
    arr_init(arr);
    while (str > 0)
    {
        arr[size] = hex[str % 16];
        str = str / 16;
        size -= 1;
    }
    write(1, arr, 16);
    write(1, ": ", 2);
}

void    print_hex(unsigned char *str, unsigned int size)
{
    char    *hex;
    unsigned int    index;
    unsigned char   A;
    unsigned char   B;
    hex = "0123456789abcdef";
    index = 0;
    while (index < size)
    {
        A = hex[str[index] / 16];
        B = hex[str[index] % 16];
        write(1, &A, 1);
        write(1, &B, 1);
        if (index % 2 != 0)
            write(1, " ", 1);
        index++;
    }
    if (size != 16)
        write(1, "                   ", 16 - index);
}

void    print_str(unsigned char *str, unsigned int size)
{
    int     index;

    index = 0;
    while (index < size)
    {
        if (str[index] >= 32 && str[index] <= 126)
            write(1, str + index, 1);
        else
            write(1, ".", 1);
        index++;
    }
    write(1, "\n", 1);
}

void    *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char   *str;
    
    str = addr;
    while (size > 0)
    {
        if (size >= 16)
        {
            print_addr((unsigned long long) str);
            print_hex(str, 16);
            print_str(str, 16);
            str += 16;
            size -= 16;
        }
        else
        {
            print_addr((unsigned long long) str);
            print_hex(str, size % 16);
            print_str(str, size % 16);
            size = 0;
        }
    }
    return (addr);
}
