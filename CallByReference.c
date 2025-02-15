#include <stdio.h>
int main()
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
    int a=5,b=7;
    printf("Before a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("After a=%d",b=%d,a,b);
}