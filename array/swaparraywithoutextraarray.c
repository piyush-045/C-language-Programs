#include<stdio.h>
void swap(int arr[]);

void main()
{
    int x,arr[]={1,2,3,4,5,6};
     for(int i=0,j=5;i<j;i++,j--)
    {
        x=arr[i];
        arr[i]=arr[j];
        arr[j]=x;


    }

    for(int p=0;p<6;p++)
    {
        printf("%d",arr[p]);
    }
}
