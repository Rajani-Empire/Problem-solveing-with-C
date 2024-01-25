#include<stdio.h>
#include<math.h>

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    int result;
    for(int i=1;i<=num;i++)

    {
        if(pow(2,i)>num)
        {
            result=pow(2,i);

            printf("he next number, power of 2 is: %d",result);
            break;

        }
    }


    return 0;
}
