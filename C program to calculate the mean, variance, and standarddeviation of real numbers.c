
#include<stdio.h>
#include<math.h>

int main()
{

    float data[100],size,mean;
    printf("Enter the size of element :");
    scanf("%f",&size);
    printf("Enter the element :");
    for(int i=0;i<size;i++)
    {
    scanf("%f",&data[i]);
    }


    int sum=0;

    for(int i=0;i<size;i++)
    {
        sum=sum+data[i];

    }

    mean=sum/size;


    float variance,sum1=0;

    for(int i=0;i<size;i++)
    {
       sum1= sum1+pow(mean-data[i],2);
    }

    variance=sum1/size;

    float standard_deviation = sqrt(variance);


    printf("Mean of elements : %.2f\n",mean);
    printf("variance of elements: %.2f\n",variance);
    printf("Standard deviation :  %.2f\n",standard_deviation);

    return 0;
}
