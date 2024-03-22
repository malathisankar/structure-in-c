#include <stdio.h>
int main()
{
  struct student
  {
    char name;
    int rollno;
    float marks;
  };
  struct student s[3];
  int i;
  for(i=0;i<3;i++)
  {
    scanf(" %c%d%g",&s[i].name,&s[i].rollno,&s[i].marks);
  }
  for(i=0;i<3;i++)
  {
    printf("%c %d %g\n",s[i].name,s[i].rollno,s[i].marks);
  }
}

