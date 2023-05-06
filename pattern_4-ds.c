#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= k; i++)
        {
            printf("%d", i);
        }
        k--;
        printf("\n");
    }

    return 0;
}