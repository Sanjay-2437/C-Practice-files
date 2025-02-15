#include <stdio.h>
int main()
{
    int i=0;
    int a[3]={10,20,30};
    int*p=a;

for(i=0;i<3;i++)
{
    printf("%d",*p);
    p++;

}
}