#include<stdio.h>

int main()
{
    int T;

    while(T--)
    {

     char fact[1000];
     int i, j, n;

     scanf("%d", &n);

     for( i = 0; i < n; i++) {
        fact[i] = (j * i);
     }

     printf("fact = %c\n", fact[n-1]);

    }

}
