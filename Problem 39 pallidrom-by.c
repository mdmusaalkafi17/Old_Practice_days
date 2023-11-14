#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    char ara[101];
    char rev[101];
    int i, j, check;

    scanf("%d", &T);

    while(T--)
    {

        scanf(" %[^\n]", ara);

        for(i = 0, j = strlen(ara)-1; ara[i]!='\0'; i++, j--)
        {
            rev[i]= ara[j];
        }

        for(i = 0; ; i++)
        {
            if(ara[i]==rev[i])
            {
                check = 1;
                break;
            }

            else {
                check = 0;
                break;
            }
        }

        if(check == 1)
        {
            printf("Yes! It is Palindrome!\n");
        }
        if(check == 0)
        {
            printf("Sorry! It is not Palindrome!\n");
        }
    }

    return 0;
}
