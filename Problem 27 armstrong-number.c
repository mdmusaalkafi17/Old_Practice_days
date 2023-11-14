#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        int number, n1, n2 , n3, check;

            scanf("%d", &number);

            n1 = number % 10;

            n2 = (number / 10) % 10;

            n3 = (number / 100) % 10;

            check  = pow(n1, 3) + pow(n2, 3) + pow(n3, 3);


            if(check == number)
            {
            printf("%d is an armstrong number!\n", number);
            }
            else
            {
            printf("%d is not an armstrong number!\n", number);
            }
    }
}
