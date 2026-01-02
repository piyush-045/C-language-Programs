#include<stdio.h>

void main()
{
    char a=127;
    printf("%d\n",a);

    char b=128;
    printf("%d\n",b);    // range -128 to 127 thats why from 128 to next values again starts cycle with value -128 to 127...continue this cycle

}
