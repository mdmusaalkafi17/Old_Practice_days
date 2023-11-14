#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int n, i, count=0;

        scanf("%d", &n);

        for(i = 1; i < n; i++)
        {
            if(n%i==0)
            {
                count =  count + i;
            }


        if(count == n)
        {
            printf("%d\n", n);
        }

        else{
            printf("NO, %d is not a perfect number!\n", n);
        }
        }
    }
}
