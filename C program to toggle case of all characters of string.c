
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

   char ch;

   for(int i=0;i<len;i++)
   {
     ch=str[i];
     if(ch>='a' && ch<='z')
     {
        str[i]=str[i]-32;
     }
     else if (ch >= 'A' && ch <= 'Z')
     {
          str[i]=str[i]+32;
     }


   }




  printf("String after toggle case: %s \n",str);



    return 0;
}
