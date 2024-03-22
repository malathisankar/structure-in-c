#include <stdio.h>
int main()
{
  struct student
  {
    char name;
    int rollno;
    float marks;
  };
  struct student s1={'A'};
  printf("%c %d %f\n",s1.name,s1.rollno,s1.marks);
}

