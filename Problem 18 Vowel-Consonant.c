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
            if(ara[i]=='a'||ara[i]=='e'||ara[i]=='i'||ara[i]=='o'||ara[i]=='u'||ara[i]=='A'||
               ara[i]=='E'||ara[i]=='I'||ara[i]=='O'||ara[i]=='U')
            {
                printf("%c", ara[i]);
            }
        }

        printf("\n");

        for(i = 0; ara[i]!='\0'; i++)
        {
            if(ara[i]!='a'&&ara[i]!='e'&&ara[i]!='i'&&ara[i]!='o'&&ara[i]!='u'&&ara[i]!='A'&&
               ara[i]!='E'&&ara[i]!='I'&&ara[i]!='O'&&ara[i]!='U'&& ara[i]!='U'&& ara[i]!='0'&& ara[i]!='1'&&
               ara[i]!='2'&& ara[i]!='3'&& ara[i]!='4'&&ara[i]!='5'&&ara[i]!='6'&&ara[i]!='7'&&ara[i]!='8'&&ara[i]!='9'
               &&ara[i]!=' '&&ara[i]!= '!' && ara[i]!= '@' && ara[i]!= '#' && ara[i]!= '$' && ara[i]!= '%'
                && ara[i]!= '^' && ara[i]!= '&' && ara[i]!= '*' &&
                ara[i]!= '-' && ara[i]!= '+' && ara[i]!= '=' && ara[i]!= '_'
                && ara[i]!= '|' && ara[i]!= ';' &&
                ara[i]!= ':' && ara[i]!= '?' && ara[i]!= '/' && ara[i]!= '.'
                && ara[i]!= ',' && ara[i]!= '<' && ara[i]!= '>')

               {
                   printf("%c", ara[i]);
               }
        }
        printf("\n");

    }

    return 0;
}
