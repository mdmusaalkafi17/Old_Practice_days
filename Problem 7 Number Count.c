#include<stdio.h>
#include<string.h>
int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int count = 0, i, j;
        char n[1000000];
        scanf(" %[^\n]", n);

        for(i = 0, j = 1; i <= strlen(n)-1; i++, j++) {
            if(n[i] == ' ' && n[j] != ' ') {
                count++;
            }
        }
        printf("%d\n", count+1);
    }
}
