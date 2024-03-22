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
  struct student s1={'B',200,97};
  printf("%c ",s.name);
  printf("%d ",s.rollno);
  printf("%f\n",s.marks);
  printf("%c %d %f\n",s1.name,s1.rollno,s1.marks);
}

