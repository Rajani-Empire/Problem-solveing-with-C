
#include<stdio.h>
#include<string.h>


int main()
{

  char str1[30],str2[30] ;
  printf("Enter string1: ");
  fgets(str1,sizeof(str1),stdin);


  size_t len1=strlen(str1);
  if(len1>0 && str1[len1-1]=='\n')
  {
     str1[len1-1]='\0';
     len1--;
  }


  printf("Enter string2: ");
  fgets(str2,sizeof(str2),stdin);

   size_t len2=strlen(str2);
  if(len2>0 && str2[len2-1]=='\n')
  {
     str2[len2-1]='\0';
     len2--;
  }


  char temp1,temp2;


  if(len1 != len2)
  {
      printf("These are not anagram");
  }

  for(int i=0;i<len1-1;i++)
  {
     for(int j=0;j<len1-1-i;j++)
     {
         if(str1[j]>str1[j+1])
         {
            temp1=str1[j];
            str1[j]=str1[j+1];
            str1[j+1]=temp1;
         }

     }

  }



  for(int i=0;i<len2-1;i++)
  {
     for(int j=0;j<len2-1-i;j++)
     {
         if(str2[j]>str2[j+1])
         {
            temp2=str2[j];
            str2[j]=str2[j+1];
            str2[j+1]=temp2;
         }

     }

  }

  int count =0;


  for(int i=0;i<len1;i++)
  {
     if(str1[i] != str2[i] )
     {
         count++;
          break;
     }

  }


  if(count==0)
  {
      printf("Strings are anagram\n");
  }
  else
  {
     printf("Strings are not anagram\n");
  }


return 0;
}
