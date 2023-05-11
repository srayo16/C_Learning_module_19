#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int res = 1;
void fun(long long a, int b)
{
    if (b > a)
        return;
    res = res * b;
    fun(a, b + 1);
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    int i = 1;
    fun(n, i);
    if (res == 1)
    {
        printf("0");
    }
    else
    {
        printf("%lld", res);
    }
    return 0;
}