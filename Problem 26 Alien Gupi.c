#include<stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        double i, days, total_food, daily_food, remaining_food, count = 0;

        scanf("%lf", &total_food);

        while(1)
        {
            daily_food = total_food/2;
            remaining_food = total_food - daily_food;
            total_food = remaining_food;
            count++;
            if(total_food <= 1)
            {
                break;
            }
        }

        printf("%0.0lf days\n", count);
    }
}
