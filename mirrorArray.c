#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int mirr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // int arr2[1][1] = arr[i][j];

            mirr[i][(c - 1) - j] = arr[i][j];
        }
    }
    // printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mirr[i][j]);
        }
        printf("\n");
    }

    return 0;
}