#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int ara[1000], n, i, j;

        scanf("%d", &n);

        for(i = 0; i < n; i++)
        {
            scanf("%d", &ara[i]);
        }

        printf("%d", ara[0]);
        for(j = 2; j < n; j=j+2)
        {

            printf(" %d", ara[j]);
        }

        printf("\n");
    }
}
