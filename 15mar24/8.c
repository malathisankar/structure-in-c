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
}

