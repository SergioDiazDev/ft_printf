#include <stdarg.h>
#include "ft_printf.h"
#include <stdio.h>

int ft_printf(char const *str, ...)
{
    va_list ptr;
    va_start(ptr, str);

    printf("%s\n", str);
    str = va_arg(ptr, char *);
    printf("%s\n", str);
    str = va_arg(ptr, char *);
    printf("%s\n", str);
    va_end(ptr);

    return (1);
}
