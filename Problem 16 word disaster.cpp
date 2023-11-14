#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int x = 0;

void rev(char word[], char S[])
{
    int i, space = 0, line, j, count;

    int len = strlen(S);
    int len2 = strlen(word);
    //printf("%d\n", len2);
        for(i = strlen(word)-1; i >= 0; i--)
        {
        printf("%c", word[i]);
        x++;
        }
        x++;

        //cout<<" x="<<x<<endl<<"len "<<strlen(S)+1<<endl;
        if(x!=strlen(S)+1) cout<<" ";
        else
        {
        //cout<<x<<endl<<strlen(S)+1<<endl;
            cout<<endl;
            x = 0;
        }
}
int main()
{
    int i, j, k, t, s_len, s_count;
    char S[1000], word[1000];

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf(" %[^\n]", S);

        s_len = strlen(S);
        for(j = 0, k = 0; j < s_len; j++)
        {
            if(S[j]!=' ')
                {
                    word[k] = S[j];
                    k++;
                }
            else if(k > 0)
            {
                word[k] = '\0';
                //printf("%s\n", word);
                k = 0;
                rev(word, S);
                //printf("\n");
            }

        }
        if(k > 0)
        {
            word[k] = '\0';
            //printf("%s\n", word);
            rev(word, S);
            //printf("\n");
        }


    }

}
