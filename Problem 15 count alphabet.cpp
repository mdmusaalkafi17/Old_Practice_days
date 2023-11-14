#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        char ara[10001];
        int i, j, count[26];

        scanf("%s", ara);

        for(i = 0; i < strlen(ara); i++)
            count[ara[i]-'a']++;

        for(i = 0; i < 26; i++)
        {
            if(count[i]>0)
            printf("%c = %d\n", i+97, count[i]);
            count[i]=0;
        }

        if(T!=0){
            printf("\n");
        }
    }
}
