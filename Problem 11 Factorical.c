#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {

        long long int n, i, result=1;

        scanf("%lld", &n);

        for(i = 1; i <= n; i++) {
            result = result * i;
        }

        printf("%lld\n", result);

    }

    return 0;
}
