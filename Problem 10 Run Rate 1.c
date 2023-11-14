#include<stdio.h>

int main()
{
    double T, opp_run, curr_run, remain_ball, need_run;
    double curr_rate, requir_rate;

    scanf("%lf", &T);

    while(T--) {


        scanf("%lf %lf %lf", &opp_run, &curr_run,
              &remain_ball);

        need_run = (opp_run - curr_run) + 1;

        curr_rate = curr_run / ((300 - remain_ball)/6);

        requir_rate = (need_run / (remain_ball / 6));

        if(curr_run < opp_run)
        {
        printf("%0.2lf %0.2lf\n", curr_rate, requir_rate);
        }

        else
        {
            printf("%0.2lf 0.00\n", curr_rate);
        }

    }

    return 0;
}
