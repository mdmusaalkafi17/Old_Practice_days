#include<stdio.h>

int main()
{
    int i, j;

    for(i = 1000; i >= 1; i--)
    {

        if(i != 1000 && i % 5 == 0) {
            printf("\n");
        }

        printf("%d\t", i);
    }
    printf("\n");

    return 0;
}

