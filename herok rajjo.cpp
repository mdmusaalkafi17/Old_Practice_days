#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;

    cin>>T;

    while(T--)
    {
        int n, j, i, k , l, p;
        cin>>n>>p;

       // if(n > p)
        {
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= i; j++){
            cout<<p;
            if(j!=i) cout<<" ";
            }
            cout<<endl;
        }
        for(i = n-1; i >= 1; i--)
        {
            for(j = 1; j <= i; j++){
             cout<<p;
            if(j!=i) cout<<" ";
            }
            cout<<endl;
        }
        }
        cout<<endl;


    }
}
