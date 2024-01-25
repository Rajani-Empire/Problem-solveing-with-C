#include<stdio.h>
int main()
{
   int num1,num2;
   printf("Enter first number: ");
   scanf("%d",&num1);
   printf("Enter second number: ");
   scanf("%d",&num2);

   char oparator;
   printf("Choose operation to perform (+,-,*,/,%): ");
   scanf(" %c",&oparator);

   float result;

   switch(oparator)
   {

      case '+':
          {
              result=(float)(num1+num2);
              printf("Result: %d + %d = %f",num1,num2,result);
              break;
          }

      case '-':
          {
              result=(float)(num1-num2);
              printf("Result: %d - %d = %f",num1,num2,result);
              break;

          }
      case '*':
          {
              result=(float)(num1*num2);
              printf("Result: %d * %d = %f",num1,num2,result);
              break;
          }
      default :
          {
             if(num2 !=0)
             {
              result=(float)(num1/num2);
              printf("Result: %d / %d = %f",num1,num2,result);
              break;

             }

             else
             {
                 printf("Error! Invalid operator.");
                 break;
             }


          }


   }



    return 0;
}
