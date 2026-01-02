#include<stdio.h>

void main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int count=0;
    for(int i=0;i<10;i++)
    {
        for(int j=i;j<10;j++)
        {
            if(arr[i]+arr[j]==16)
            {
                printf("(%d,%d) ",arr[i],arr[j]);
                 count++;
            }
        }

    }
    printf("\ntotal pairs : %d",count);
}
