#include<stdio.h>
int main()
{
    int day;
    printf("Enter days: ");
    scanf("%d",&day);

    int years,week,days,temp;

    years=day/365;
    temp=day%365;
    week=temp/7;
    days=temp%7;


    printf("%d years, %d weeks and %d day",years,week,days);


    return 0;
}
