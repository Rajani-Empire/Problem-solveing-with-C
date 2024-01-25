
#include<stdio.h>
int main()
{

  int num1,num2,mult=0;
  printf("Enter first number: ");
  scanf("%d",&num1);
  printf("Enter second number: ");
  scanf("%d",&num2); 


  
  for(int j=1;j<=num2;j++) 
  {
   
   mult=mult+num1;

  }


printf("Multiplication of %d and %d is: %d",num1,num2,mult);


    return 0;
}
