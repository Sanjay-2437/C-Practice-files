#include<stdio.h>
#include<string.h>
typedef struct student
{
int RollNo;
char Name[10];
}stud;
int main()
{
stud s;
s.RollNo=100;
printf("%d",s.RollNo);
strcpy(s.Name,"Ram");
printf("%s",s.Name);
printf("%d", sizeof(s));
}