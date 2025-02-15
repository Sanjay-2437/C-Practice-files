#include <stdio.h>
#include <string.h>
int main()
{
    char name1 [5]="Ram";
    char name2 [5]="Ram";

    if(strcmp(name1,name2)==0)
{
    printf("Strings are equal");
}
else
{
    printf("Not equal");
}
}