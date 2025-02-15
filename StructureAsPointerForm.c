#include <stdio.h>
struct student
{
int RollNo;
char Name[10];
};
void display(struct student *s);
int main()
{
struct student s2;
display(&s2);
};
void display(struct student *s)
{
    printf("Enter name and roll no:");
    scanf("%s %d",&s->Name, &s->RollNo);
    printf("Entered name=%s and roll no=%d",s->Name, s->RollNo);
}