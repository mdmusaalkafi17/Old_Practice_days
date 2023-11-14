#include<stdio.h>
#include<string.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        char sen[1000];

        int i, j;

        scanf(" %[^\n]", sen);

        for(i = 0; i < strlen(sen); i++)
        {
            sen[i] = sen[i] - 64;

            printf("%d", sen[i]);
        }
        printf("\n");
    }
}
