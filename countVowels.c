#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count = 0, x = 0;

void fun(char a[], int n)
{
    if (n == strlen(a))
        return;
    if (a[n] == 'A' || a[n] == 'a' || a[n] == 'E' || a[n] == 'e' || a[n] == 'i' || a[n] == 'I' || a[n] == 'O' || a[n] == 'o' || a[n] == 'u' || a[n] == 'U')
    {
        count++;
    }
    n++;
    fun(a, n);

    // printf("%s", a);
}

int main()
{
    char s[205];
    gets(s);

    fun(s, x);

    printf("%d", count);
    return 0;
}