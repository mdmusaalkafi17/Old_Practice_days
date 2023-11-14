#include<stdio.h>

int main()
{
    int T,i, max, temp;
    scanf("%d", &T);
    int n1, n2, n3, sn1, sn2, sn3;

    for(i = 1; i<=T; i++)
    {
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 < n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n1 < n3)
    {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if(n2 < n1)
    {
        temp = n2;
        n2 = n1;
        n1 = temp;
    }
    if(n2 < n3)
    {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    if(n3 < n1)
    {
        temp = n3;
        n3 = n1;
        n1 = temp;
    }
    if(n3 < n2)
    {
        temp = n3;
        n3 = n2;
        n2 = temp;
    }
    printf("Case %d: %d %d %d\n", i, n1, n2, n3);
    }
}
