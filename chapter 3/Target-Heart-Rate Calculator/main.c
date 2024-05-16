#include <stdio.h>
#include <stdlib.h>

int main(){

    int b_day,b_month,b_year;               //  b_  ==(means)  birth_
    int c_day,c_month,c_year;               //  c_  ==(means)  current_
    int m_h_rate;                        // m_ for maximum  h_ for heart         (beats per minute) (220-age)
    float t_h_rate1,t_h_rate2;           // t_ for target   h_ for heart  (1 for 50, 2 for 85   <--(range that is 50-85% of your maximum heart rate))
    int age;

    printf("Enter your birthday(dd mm yy): ");
    scanf("%d%d%d",&b_day,&b_month,&b_year);
    printf("Enter current date(dd mm yy): ");
    scanf("%d%d%d",&c_day,&c_month,&c_year);



    if(b_month<=c_month){
        if(b_day<=c_day){
            age=c_year-b_year;
        }
    }
    else{
        age=c_year-b_year-1;
    }

    m_h_rate=220-age;

    t_h_rate1=0.5*(float)m_h_rate;
    t_h_rate2=0.85*(float)m_h_rate;

    printf("\nYour age(in years) is %d\n",age);
    printf("Your maximum heart rate is %d\n",m_h_rate);
    printf("Your target heart rate range is between %.2f and %.2f\n",t_h_rate1,t_h_rate2);

    return 0;
}
