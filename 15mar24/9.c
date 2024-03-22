//ASSIGNMENT---HIGHEST MARK OF STUDENTS
#include <stdio.h>
int main()
{
  struct student
  {
    char name;
    int rollno;
    float marks;
  };
  struct student s1,s2,s3;
  scanf(" %c%d%f",&s1.name,&s1.rollno,&s1.marks);
  scanf(" %c%d%f",&s2.name,&s2.rollno,&s2.marks);
  scanf(" %c%d%f",&s3.name,&s3.rollno,&s3.marks);
  printf("%c %d %f\n",s1.name,s1.rollno,s1.marks);
  printf("%c %d %f\n",s2.name,s2.rollno,s2.marks);
  printf("%c %d %f\n",s3.name,s3.rollno,s3.marks);
  struct student h;
  if(s1.marks>=s2.marks && s1.marks>=s3.marks)
  h=s1;
  else if(s2.marks>=s1.marks && s2.marks>=s3.marks)
  h=s2;
  else
  h=s3;
  printf("Highest marks of student:");
  printf("%c %d %f\n",h.name,h.rollno,h.marks);
}

