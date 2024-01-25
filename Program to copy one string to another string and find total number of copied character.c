
#include<stdio.h>
#include<string.h>



int main()
{
    char str1[30],str2[30];

    printf("Source string (str1): ");
    gets(str1);

    strcpy(str2,str1);
    printf("Target string (str2): %s\n",str2);


    int len=strlen(str2);
    printf("Copied characters are: %d\n",len);
    return 0;
}
