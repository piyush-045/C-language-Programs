#include<stdio.h>
#include<stdint.h>
#include<string.h>

char string[5]="hello";

uint8_t buffer[10];


int main(void)
{

int n;

printf("%d\n",n);

n=0;
printf("%d\n",n);
printf("%d\n",n=printf("hello\n"));
int d=sprintf(buffer,"hello vs code i rate you %d",10);
printf("%s\n%d",buffer,d);

return 0;
}