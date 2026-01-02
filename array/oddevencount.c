#include<stdio.h>
void main()
{
    int e=0,o=0,arr[6];
    printf("enter values :\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<6;i++)
    {
        if(arr[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("total %d even numbers\ntotal %d odd numbers\n",e,o);

}
