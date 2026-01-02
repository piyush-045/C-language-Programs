#include<stdio.h>

void main()
{
    int n,a;
    printf("enter n : ");
    scanf("%d",&n);
    int arr[n];
    if(n%2==0)
    {
        a=n/2;
    }
    else
    {
        a=n/2+1;
    }
    int brr[a],crr[n/2],bi=0,ci=0;
    printf("enter array elements\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        {
            brr[bi++]=arr[i];
        }
        else
        {
            crr[ci++]=arr[i];
        }
    }

    printf("elements of arr : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nelements of brr : ");
    for(int i=0; i<a; i++)
    {
        printf("%d ",brr[i]);
    }

    printf("\nelements of crr : ");
    for(int i=0; i<n/2; i++)
    {
        printf("%d ",crr[i]);
    }

    printf("\nsize of arr : %d bytes\nsize of brr : %d bytes\nsize of crr : %d bytes",sizeof(arr),sizeof(brr),sizeof(crr));

}
