#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        char n[100];

        int result;

        scanf("%s", &n);

        result = (n[0]-48) + (n[4]-48);


        printf("Sum = %d\n", result);

    }
}
