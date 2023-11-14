#include<stdio.h>
#include<string.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        char ara[101], i, j;

        scanf(" %[^\n]", ara);

        for(i = 0; ara[i]!='\0'; i++)
        {
            if(ara[i] >= 65 && ara[i]<= 91)
            {
                printf("Uppercase Character\n");
            }
            else if(ara[i] >= 97 && ara[i]<= 123)
            {
                printf("Lowercase Character\n");
            }
            else if(ara[i] >= '1' && ara[i]<= '9')
            {
                printf("Numerical Digit\n");
            }
            else
            {
                printf("Special Character\n");
            }
        }

    }

    return 0;
}
