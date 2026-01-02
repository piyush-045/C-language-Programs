#include<stdio.h>

void main()
{
    int n,n1,n2;
    printf("enter first array size\n");
    scanf("%d",&n1);
     printf("enter second array size\n");
    scanf("%d",&n2);
    n=n1+n2;
    int arr[n];
    printf("enter elements of 1st array\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("enter elements of 2nd array\n");
    for(int i=n1;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("merged array is\n");
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
