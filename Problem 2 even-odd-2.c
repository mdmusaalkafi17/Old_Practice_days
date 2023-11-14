#include<stdio.h>
#include<string.h>

int main()
{
    int T, i;

    char n[102];

    int len, temp;

    scanf("%d", &T);
    //for(i = 0; i < T; i++)
    while(T--)
    {
    scanf("%s", &n);
    //printf("Vale of n : %s\n", n);
    len = strlen(n);
    //printf("Len : %d\n", len);
    temp = (int)n[len-1];
    //printf("temp: %d\n", temp);


    if((int)n[len-1] % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }

    }
}

