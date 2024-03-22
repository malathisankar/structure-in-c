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
  scanf("%c",&s.name);
  scanf("%d",&s.rollno);
  scanf("%f",&s.marks);
  printf("%c %d %f\n",s.name,s.rollno,s.marks);
}

