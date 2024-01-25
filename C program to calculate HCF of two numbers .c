
#include<stdio.h>
int main()

{

   int num1,num2,hcf;

   printf("Enter first number:");
   scanf("%d",&num1);
   printf("Enter second number:");
   scanf("%d",&num2);

   int rem;

   int Orginal_num1=num1;
   int Orginal_num2=num2;

   if(num1>num2)
   {
      while(num2 !=0)
      {
         rem=num1%num2;
         num1=num2;
         num2=rem;

      }
   }

   else
   {
     int temp=num1;
         num1=num2;
         num2=temp;

      while(num2 !=0)
      {
         rem=num1%num2;
         num1=num2;
         num2=rem;

      }

   }


   printf("HCF (Highest Common Factor) of %d,%d is: %d",Orginal_num1,Orginal_num2,num1);



    return 0;
}
