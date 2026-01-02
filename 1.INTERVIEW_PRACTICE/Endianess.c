#include<stdio.h>
#include<stdint.h>

int main()
{
    unsigned int a = 1;
    char *c = (char*)&a;

    if(*c)
    {
        printf("little endien");
    }
    else{
        printf("big endienn");
    }
}