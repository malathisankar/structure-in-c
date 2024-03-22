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
  for(i=0;i<3;i++)
  {
    printf("%c %d ",s[i].name,s[i].rollno);
    for(j=0;j<3;j++)
      printf("%g ",s[i].marks[j]);
    printf("\n");
  }
}

