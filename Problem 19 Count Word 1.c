#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        char S[10000];
        int i, count = 1;

        scanf(" %[^\n]", S);

        for( i = 0; S[i] != '\0'; i++)
        {
            if(S[i] == ' ' && S[i] >= 65 && S[i] <91, S[i]>=97 && S[i]<=123)
            {
                count++;
            }
        }

        printf("Count = %d\n", count);
    }
}
