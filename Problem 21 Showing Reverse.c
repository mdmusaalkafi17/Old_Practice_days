#include<stdio.h>
#include<string.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        char word[1001];
        int i;

        scanf(" %[^\n]", word);

        for(i = strlen(word) - 1; i >= 0; i--)
        {
            printf("%c", word[i]);
        }

        printf("\n");
    }
}
