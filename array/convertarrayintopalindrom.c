#include<stdio.h>
void main()
{
    int c=0,arr[6];
    printf("enter array elements : \n");
    for(int i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=0,j=5; i<j; i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            arr[j]=arr[i];
            c=0;
        }
        else
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("given array is alredy palindrom");
    }
    else if(c==0)
    {
        for(int i=0; i<6; i++)
        {
            printf("%d",arr[i]);

        }
    }

}

