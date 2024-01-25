#include<stdio.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Enter a first complex number (real and imaginary):");
    scanf("%d %d",&x1,&y1);
    printf("Enter a second complex number (real and imaginary):");
    scanf("%d %d",&x2,&y2);

    printf("Result is = %d + %di",(x1+x2),(y1+y2)) ;
    return 0;
}
