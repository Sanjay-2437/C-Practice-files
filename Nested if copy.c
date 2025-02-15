#include <stdio.h>
int main()
{
    int a,b;
    printf("Welcome to the theatre \n");
    printf("Enter ticket price:");
    scanf("%d %d", &a,&b);
    if (a==200)
    {
        if(b==1)
        {
            printf("popcorn");
            }
            else{
                printf("Juice");
                }

    printf("Gold");
    }
    else if (a==100)
    {
        printf("Silver");
        }
        else
        {
            printf("No ticket")
            }


}