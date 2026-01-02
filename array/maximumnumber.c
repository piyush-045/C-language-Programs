#include<stdio.h>

void main()
{
    int min,max,arr[5];
    printf("enter numbers :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    max=arr[0];
    for(int i=1;i<5;i++)
    {
        if(max<=arr[i])
        {
            max=arr[i];
        }
        if(min>=arr[i])
        {
            min=arr[i];
        }

    }

    printf("maximum number is %d\nminimum number is %d",max,min);

}
