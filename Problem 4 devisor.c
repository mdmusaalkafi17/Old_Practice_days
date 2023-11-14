#include<stdio.h>

int main()
{
    int T, j;
    scanf("%d", &T);

    for(j = 1; j <= T; j++)
    {
        int n, i;
        scanf("%d", &n);

        printf("Case %d:", j);
        for(i = 1; i <= n; i ++) {
            if(n % i == 0) {
                printf(" %d", i);

            }
        }
        printf("\n");
    }
}
