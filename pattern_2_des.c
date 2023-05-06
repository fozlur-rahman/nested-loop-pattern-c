#include <stdio.h>
int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = 0;
    k = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= s; j--)
        {
            printf("*");
        }

        s++;

        printf("\n");
    }

    return 0;
}