#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int range, i, count = 0, j;

        scanf("%d", &range);

        for(i = 1; i <= range; i++)
        {
            for(j = 1; j < i; j++)
            {
                if(i % j == 0)
                {
                    count = j + count;
                }
            }
            if(count == i)
            {
                printf("%d\n", i);
            }
        }

    }
}
