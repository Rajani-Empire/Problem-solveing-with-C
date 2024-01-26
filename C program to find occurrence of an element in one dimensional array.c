
 #include<stdio.h>
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

  int find_num,count=0;

  printf("Enter number to find Occurrence: ");
  scanf("%d",&find_num);

  for(int i=0;i<size;i++)
  {
     if(find_num==arr[i])
     {
         count++;

     }

  }


  printf("\nOccurrence of %d is: %d",find_num,count);



 return 0;

 }
