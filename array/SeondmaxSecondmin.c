#include<stdio.h>

void main()
{
    int min,max,smin,smax,maxi,smaxi,mini,smini,arr[5];
    printf("enter numbers :\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0],smin=arr[0],maxi=0,smaxi=0;
    max=arr[0],smax=arr[0],mini=0,smini=0;
    for(int i=1;i<5;i++)
    {
        if(max<=arr[i])
        {
            smax=max;
            smaxi=maxi;
            max=arr[i];
            maxi=i;
        }
        else if(smax<=arr[i] && max!=arr[i])
        {
            smax=arr[i];
            smaxi=i;
        }
        if(min>=arr[i])
        {
            smin=min;
            smini=mini;
            min=arr[i];
            mini=i;
        }
         else if(smin>=arr[i] && min!=arr[i])
        {
            smin=arr[i];
            smini=i;
        }

    }

    printf("second maximum number is %d & its index %d\n",smax,smaxi);
    printf("second minimum number is %d & its index %d",smini,smini);

}

