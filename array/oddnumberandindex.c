#include<stdio.h>
void main()
{
    int arr[]={12,13,14,15,17};
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d %d\n",arr[i],i);
        }
    }
     for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            printf("\n%d %d",arr[i],i);
        }
    }
}
