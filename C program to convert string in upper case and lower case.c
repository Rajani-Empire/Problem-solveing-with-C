
#include<stdio.h>
#include<string.h>


int main()
{
   char str[30];
   printf("Enter any string: ");
   fgets(str,sizeof(str),stdin) ;

   size_t len=strlen(str);
   if(len>0 && str[len-1]=='\n' )
   {
        str[len-1]='\0';
        len--;

   }

   printf("Entered string is: %s\n",str);
   printf("String in Upper case is: %s\n",strupr(str));
   printf("String in Lower case is: %s\n",strlwr(str));




    return 0;
}
