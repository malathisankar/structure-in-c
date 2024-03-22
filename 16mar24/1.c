#include <stdio.h>
int main()
{
  struct student
  {
    char name;
    int rollno;
    float mark;
  };
  struct student s1,s2,s3;
  scanf(" %c%d%f",&s1.name,&s1.rollno,&s1.mark);
  scanf(" %c%d%f",&s2.name,&s2.rollno,&s2.mark);
  scanf(" %c%d%f",&s3.name,&s3.rollno,&s3.mark);
  if((s1.mark>s2.mark)&&(s1.mark>s3.mark))
    printf("%c %d %f\n",s1.name,s1.rollno,s1.mark);
  if((s2.mark>s1.mark)&&(s2.mark>s3.mark))
    printf("%c %d %f\n",s2.name,s2.rollno,s2.mark);
  if((s3.mark>s1.mark)&&(s3.mark>s2.mark))
    printf("%c %d %f\n",s3.name,s3.rollno,s3.mark);
}

