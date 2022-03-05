#include <limits.h>
#include <stdio.h>

int	ft_printf(const char *f, ...);
int main()
{
    int f, s;
    f = ft_printf("%s %s %c %d %d %x\n", "hello", NULL, 'X', INT_MAX, INT_MIN, UINT_MAX);
    s =    printf("%s %s %c %d %d %x\n", "hello", NULL, 'X', INT_MAX, INT_MIN, UINT_MAX);
    printf("%d | %d\n", f, s);
}
