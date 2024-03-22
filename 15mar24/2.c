#include <stdio.h>
int main()
{
  struct student
  {
    char name;
    int rollno;
    float marks;
  };
  struct student s={'A',100,92};
  printf("%c",s.name);
  printf("%d",s.rollno);
  printf("%f",s.marks);
}

