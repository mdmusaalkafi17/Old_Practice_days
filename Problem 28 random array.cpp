#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int T, max;

    //scanf("%d", &T);

    {
        int i, ara[1000], ara2[1000] ,size, flag = 0;

        scanf("%d", &size);

        for(i = 0; i < size; i++)
        {
            scanf("%d", &ara[i]);
        }

        for(i = 0; i < size; i++)
        {
            ara2[i] = ara[i];
        }

        sort(ara, ara + size);

        for(i = 0; i < size; i++)
        {
            if(ara2[i]==ara[i])
            {
                flag = 1;
            }

            else {
                flag = 2;
                break;
            }
        }
            if(flag == 1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }


}
}
