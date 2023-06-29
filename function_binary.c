#include "main.h"
/**
 * print_binary -
 * @args:
 * Return:
 */
int print_binary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;
    unsigned int mask = 1 < (sizeof(unsigned int) * 8 - 1);

    if (num == 0)
    {
        _putchar('0');
        count++;
        return count;
    }

    while (mask > 0)
    {
        if (num & mask)
            _putchar('1');
        else
            _putchar('0');

        if (mask >= 1)
        	count++;
    }

    return count;
}
