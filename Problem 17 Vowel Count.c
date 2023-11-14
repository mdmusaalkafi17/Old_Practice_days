#include<stdio.h>
#include<string.h>
int main()
{
    int T;

    char sen[100];

    int i, count = 0, j, k;

    scanf("%d", &T);

    for(j = 0; j < T; j++)
    {

        scanf(" %[^\n]", sen);

        for(i = 0;  sen[i] != '\0' ; i++) {

            if(sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] =='o'|| sen[i] =='u'
               || sen[i] =='A' || sen[i] =='E' || sen[i] == 'I' || sen[i] =='O' || sen[i] =='U') {
              count++;
            }
        }

        printf("Number of vowels = %d\n", count);

        count = 0;
    }

}
