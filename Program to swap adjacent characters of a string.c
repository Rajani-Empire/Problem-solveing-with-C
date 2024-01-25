int main()
{
    char str1[30];
    printf("Enter the string : ");
    fgets(str1,sizeof(str1),stdin);

    size_t len = strlen(str1);
    if(len>0 && str1[len-1]=='\n')
    {
        str1[len-1]='\0';
        len--;

    }

    char ch;


    if(len%2==0)
    {
     for(int i=0;i<len-1;i+=2)
     {
         ch=str1[i];
         str1[i]=str1[i+1];
         str1[i+1]=ch;

     }

    }

    else
    {

      printf("The length of the string is Odd.");
      return 1;
    }



    printf("After Swap String : %s",str1);
    return 0;
}
