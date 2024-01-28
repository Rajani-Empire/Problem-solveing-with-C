#include<stdio.h>
int main()
{

 int num=1;
 int increment=10;
 int count=10;


 loop:

     printf("%d\t",num);
     num += increment;
     increment += 10;
     count--;

     if(count>0)
        goto loop;

    return 0;



}
