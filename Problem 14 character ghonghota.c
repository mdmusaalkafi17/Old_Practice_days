#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int i, count = 0, j;
        char ara[1000], check[3];

        scanf(" %[^\n]", ara);

        scanf("%s", &check[0]);

        for(i = 0, j = 0; ara[i]!='\0'; i++)
        {
            if(ara[i]==check[0])
            {
                count++;
            }
        }
        if(count > 0) {
        printf("Occurrence of '%s' in '%s' = %d\n", check, ara, count);
        }
        else
        {
            printf("'%s' is not present\n", check);
        }
    }
}
