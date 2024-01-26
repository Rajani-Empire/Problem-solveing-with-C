
#include<stdio.h>

int first_repeated_element(int arr[50],int size);
int first_repeated_element(int arr[50],int size)
{
   for(int i=0;i<size;i++)
   {
       for(int j=i+1;j<size;j++)
       {
           if(arr[i]==arr[j])
           {
              return arr[i];
           }


       }
   }


    return -1;

}





int main()
{
  int arr[50],size;
  printf("Enter total number of elements: ");
  scanf("%d",&size);
  printf("Enter array elements:\n");

  for(int i=0;i<size;i++)
  {
      printf("Enter element %d: ",i+1);
      scanf("%d",&arr[i]);

  }

  int first_repeated= first_repeated_element(arr,size);

  if(first_repeated !=-1)
  {

     printf("The first repeated element is: %d\n",first_repeated );
  }
  else
  {
      printf("No repeated element\n");
  }




    return 0;
}
