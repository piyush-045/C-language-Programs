#include<stdio.h>

void main()
{
    int arr[]={1,2,3,4,5};
    int brr[]={6,7,8,9,10,11,12};
    int crr[12];
    for(int i=0;i<5;i++)
    {
        crr[i]=arr[i];
    }
    for(int j=0;j<7;j++)
    {
        crr[j+5]=brr[j];
    }
    for(int i=0;i<12;i++)
    {
       printf("%d ",crr[i]);
    }
}
