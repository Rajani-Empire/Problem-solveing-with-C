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

int temp;


for(int i=0;i<size-1;i++)
{
    for(int j=0;j<size-i-1;j++)
    {

        if(arr[j]>arr[j+1])
        {
          temp=arr[j];
          arr[j] =arr[j+1];
          arr[j+1]=temp;
        }

        for(int k=0;k<size;k++)
        {
            printf("%d ",arr[k]);
        }

        printf("\n");
    }

     printf("\n");
}





    return 0;
}
