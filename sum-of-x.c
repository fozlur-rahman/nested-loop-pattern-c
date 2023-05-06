#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }
    int x;
    int flag = 0;
    scanf("%d", &x);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", a[i], a[j]);
            if (a[i] + a[j] == x)
            {
                printf("%d + %d = %d \n", a[i], a[j], x);
                flag = 1;
            }
        }
    }
    if (flag != 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}