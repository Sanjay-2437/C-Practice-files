#include <stdio.h>
#include <string.h>
struct student
{
int RollNo;
char Name[10];
};
int main()
{
struct student s;
s.RollNo=100;
strcpy(s.Name, "Ram");
printf(" %d ", s.RollNo );
printf(" %s ", s.Name );

struct student s1;
s1.RollNo=102;
strcpy(s1.Name,"Ravi");
printf(" \n%d ", s1.RollNo );
printf(" %s ", s1.Name );
}