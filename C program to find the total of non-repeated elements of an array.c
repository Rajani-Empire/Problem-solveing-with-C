//C program to find the total of non-repeated elements of an array


#include<stdio.h>

int non_repeated_element(int arr[50],int size);
int non_repeated_element(int arr[50],int size)
{

   int sum=0;
   for(int i=0;i<size;i++)
   {
       int is_repeated=0;
       for(int j=i+1;j<size;j++)
       {
           if(arr[i] ==arr[j])
           {
                is_repeated=1;
                break;

           }

       }

       if(!is_repeated)
       {
           sum=sum+arr[i];
       }


   }

  return sum;

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


 int sum= non_repeated_element(arr,size);


 printf("Total of non-repeated elements: %d\n", sum);


    return 0;
}
