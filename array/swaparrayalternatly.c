#include<stdio.h>

void main()
{
    int x,arr[]={1,2,3,4,5,6};
     for(int i=0,j=1;i<5,j<6;i=i+2,j=j+2)
    {
        x=arr[i];
        arr[i]=arr[j];
        arr[j]=x;


    }

    for(int p=0;p<6;p++)
    {
        printf("%d ",arr[p]);
    }
}
