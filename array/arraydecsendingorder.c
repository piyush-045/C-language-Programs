#include<stdio.h>

void main()
{
    int x,arr[5];
    printf("enter values :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]<=arr[j])
            {
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}
