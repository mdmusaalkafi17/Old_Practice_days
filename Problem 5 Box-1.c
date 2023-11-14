#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int n, i, j, k;

        scanf("%d", &n);

        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n; j++)
            {
                printf("*");

            }

            printf("\n");

            }

            if(T!=0)
            {
                printf("\n");
            }
        }
    }
