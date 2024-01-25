
 #include<stdio.h>
 int main()
 {
    int x,y;
    printf("Enter the value of X: ");
    scanf("%d",&x);
    printf("Enter the value of Y: ");
    scanf("%d",&y);


    if(x>0 && y>0)
    {
        printf("Point (%d, %d) lies in the first quadrant\n",x,y);

    }

    else if(x<0 && y>0)
     {
        printf("Point (%d, %d) lies in the second quadrant\n",x,y);

    }

    else if(x<0 && y<0)
    {
        printf("Point (%d, %d) lies in the third quadrant\n",x,y);

    }

    else if(x>0 && y<0)
    {
        printf("Point (%d, %d) lies in the fourth quadrant\n",x,y);

    }

    else if(x==0 && y==0)
    {
        printf("Point (%d, %d) lies in the axix\n",x,y);
    }

    else if(x==0 && (y>0 || y<0))
    {
        printf("Point (%d, %d) lies in the y axix\n",x,y);
    }
    else

    {
        printf("Point (%d, %d) lies in the x axix\n",x,y);
    }



     return 0;
 }
