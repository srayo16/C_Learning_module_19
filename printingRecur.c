#include <stdio.h>

void fun(int a)
{
    if (a == 0)
        return;
    int b = a % 10;

    fun(a / 10);

    printf("%d ", b);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        fun(x);
        if (x == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}