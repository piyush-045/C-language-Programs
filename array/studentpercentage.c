#include<stdio.h>
void main()
{
    int p1,p2,p3,arr[3];
    for(int i=1;i<=3;i++)
    {
        printf("\nstudent %d marks : \n",i);
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[j]);
        }
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+arr[j];
        }
        if(i==1)
        {
          p1=sum/3;
          printf("percentage : %d\n",p1);
        }
        else if(i==2)
        {
          p2=sum/3;
          printf("percentage : %d\n",p2);
        }
        else if(i==3)
        {
          p3=sum/3;
          printf("percentage : %d\n",p3);
        }
    }
    if(p1>p2 && p1>p3)
    {
       printf("\nhighest percentage is : %d\n",p1);
    }
     else if(p2>p3 && p2>p1)
    {
       printf("\nhighest percentage is : %d\n",p2);
    }
    else if(p3>p2 && p3>p1)
    {
       printf("\nhighest percentage is : %d\n",p3);
    }
}
