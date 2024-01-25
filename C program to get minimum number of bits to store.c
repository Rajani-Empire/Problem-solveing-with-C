
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer number :");
    scanf("%d",&num);
    int rem;
    int newsize=0;

    while(num !=0)
    {
      rem=num%2;
      newsize++;

      num=num/2;

    }

    printf("Total number of bits required = %d",newsize);


    return 0;
}
