#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        char sen[10001];
        int i, count = 0, j;


        scanf(" %[^\n]", sen);

        for(i = 0; sen[i] != '\0'; i++)
        {
            if((sen[i] <= 'a' && sen[i] <='z') || (sen[i] >= 'A' && sen[i] <='Z') )
            {
                if(sen[i]==' ')
                {
                    count++;
                }


            }

        }
        printf("Count = %d\n", count+1);
    }
}
