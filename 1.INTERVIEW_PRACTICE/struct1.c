#include<stdio.h>
#include<stdint.h>
#include<string.h>

struct player
{
    int match;
    int runs;
    char str[10];
    float avg;
};

int main()
{
    struct player kohli;
    kohli.match=50;
    kohli.runs=5000;
   // kohli.str="virat";
    strcpy(kohli.str,"virat");
    kohli.avg=45.50;

    printf("%s",kohli.str);

}