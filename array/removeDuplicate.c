
#include<stdio.h>

void main()
{
    int n;
    printf("enter no. of elements : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n array elements : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
    }

    printf("\n new array elements : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
