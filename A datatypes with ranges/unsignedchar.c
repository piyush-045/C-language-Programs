#include<stdio.h>

void main()
{
    unsigned char a=255;
    printf("%d\n",a);

    unsigned char b=256;  // range 0 to 255 thats why from 256 to next values again starts cycle with value 0 to 255...continue this cycle
    printf("%d\n",b);

}

