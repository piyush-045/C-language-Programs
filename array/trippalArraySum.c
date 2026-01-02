#include<stdio.h>

void main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int count=0;
    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            for(int k=i+j; k<10; k++)
            {
                if(arr[i]+arr[j]+arr[k]==16)
                {
                    printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\n%d",count);
}
