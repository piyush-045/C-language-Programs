#include<stdio.h>

void main()
{
    int arr[10]={1,2,3,4,5};
    int brr[]={6,7,8,9,10};
    for(int i=0;i<5;i++)
    {
        arr[i+5]=brr[i];
    }
    for(int i=0;i<10;i++)
    {
       printf("%d ",arr[i]);
    }
}
