#include <stdio.h>
int add();
int main()
{
    int a;
    a=add();
    printf("%d",a);

}
int add()
{
    int a=15,b=3;
    return a+b;
}
