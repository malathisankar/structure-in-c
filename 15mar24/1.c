#include <stdio.h>
int main()
{
  struct student
  {
    char name;
    int rollno;
    float marks;
  };
  struct student s;
  s.name='A';
  s.rollno=100;
  s.marks=92;
  printf("%c",s.name);
  printf("%d",s.rollno);
  printf("%f",s.marks);
}

