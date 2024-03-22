//largest marks--loop
#include <stdio.h>
int main()
{
  struct student
  {
    char name;
    int rollno;
    float marks;
  };
  struct student s[3]={
    			{'A',100,91},
			{'B',101,72},
			{'C',102,81}
  		      };
  int i;
  float h=s[0].marks;
  for(i=0;i<3;i++)
  {
  printf("%c %d %g\n",s[i].name,s[i].rollno,s[i].marks);
  if(s[i].marks>h)
  {
  h=s[i].marks;
  }
  
 }
 printf("Highest mark: %g\n",h);
  for(i=0;i<3;i++)
  {
   if(s[i].marks==h)
  {
   printf("Highest student of mark is:%c %d %g\n",s[i].name,s[i].rollno,s[i].marks);
  }
 }
 }
