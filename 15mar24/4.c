#include <stdio.h>
int main()
{
  struct student
  {
    char name='A';
    int rollno=100;
    float marks=92;
  };
  struct student s;
  printf("%c ",s.name);
  printf("%d ",s.rollno);
  printf("%f\n",s.marks);
}

