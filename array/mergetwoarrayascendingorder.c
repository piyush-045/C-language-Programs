#include<stdio.h>
void main()
{
    int x,arr[11];
    int brr[6];
    printf("enter first array elements\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter second array elements\n");
    for(int i=0; i<6; i++)
    {
        scanf("%d",&brr[i]);
    }
    for(int i=0; i<6; i++)
    {
        arr[i+5]=brr[i];
    }

    for(int i=0; i<11; i++)
    {
        for(int j=i+1; j<11; j++)
        {
            if(arr[i]>=arr[j])
            {
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;

            }
        }
    }
    for(int i=0; i<11; i++)
    {
        printf("%d ",arr[i]);
    }
}
