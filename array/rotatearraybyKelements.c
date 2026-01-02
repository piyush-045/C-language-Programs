#include<stdio.h>

void rotate(int arr[],int a,int b);

void main()
{
    int arr[6];
    int k,n=6;
    printf("enter the array elements : \n");
    for(int i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter a number for rotation : \n");
    scanf("%d",&k);
    printf("array after %d rotation\n",k);
    rotate(arr,0,n-1);
    rotate(arr,0,k-1);
    rotate(arr,k,n-1);
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
}

void rotate(int arr[],int a,int b)
{
    int x;
    for(int i=a,j=b; i<j; i++,j--)
    {
        x=arr[i];
        arr[i]=arr[j];
        arr[j]=x; 
    }
}
