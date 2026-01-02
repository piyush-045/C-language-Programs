#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5,6};
    int brr[6];
    for(int i=0;i<6/2;i++)
    {
        brr[i]=arr[5-i];
        arr[5-i]=arr[i];
        arr[i]=brr[i];
    }

     for(int i=0;i<6;i++)
    {
       printf("%d ",arr[i]);
    }
}
