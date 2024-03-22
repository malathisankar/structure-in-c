//largest mark ---loop
#include <stdio.h>
int main()
{
  struct student
  {
    char name;
    int rollno;
    float marks[3];
  };
  struct student s[3]={
    			{'A',100,{67,92,74}},
			{'B',101,{56,75,91}},
			{'C',102,{81,95,85}}
  		      };
  int i,j;
  float h=s[0].marks[0];
  for(i=0;i<3;i++)
  {
    printf("%c %d ",s[i].name,s[i].rollno);
    for(j=0;j<3;j++)
      if(s[i].marks[j]>h)
      {
	h=s[i].marks[j];
      }
  }
  printf("Highest mark: %g\n",h);
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(s[i].marks[j]==h)
      {
	printf("Highest mark of student is: %c %d %g\n",s[i].name,s[i].rollno,s[i].marks[j]);
      }
  }
 }
}

