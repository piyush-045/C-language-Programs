#include<stdio.h>
#include<stdbool.h>

void main()
{
    bool a=true;int arr[5];
    printf("enter array elements : \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i=0,j=4;i<j;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            a=false;
            break;
        }
    }
      if(a)
        {
            printf("given array is palindrom");
        }
        else
        {
             printf("given array is not palindrom");
        }


}
