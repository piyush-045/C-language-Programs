#include<stdio.h>
void main()
{
    int n,arr[6];
    printf("enter values :\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("select any number from this array : ");
     scanf("%d",&n);
      for(int i=0;i<6;i++)
    {
        if(n==arr[i])
        {
            printf("%d",arr[i+1]);
            break;

        }
        else if(n==arr[5])
        {
            printf("no next value");
            break;
        }


    }
}
