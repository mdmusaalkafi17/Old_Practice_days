#include<stdio.h>
#include<math.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {

        int n, temp;
        scanf("%d", &n);

        temp = sqrt(n);

        if(temp * temp  == n ) {
            printf("YES\n");
        }
        else
            printf("NO\n");

    }
}

