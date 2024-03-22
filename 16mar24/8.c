#include <stdio.h>
int main()
{
  struct student
  {
    char name;
    int rollno;
    float marks[3][3];
  };
  struct student s[3]={
    			{'A',100,{{67,92,74},
			          {54,91,87},
				  {85,72,86}
			         }
			},
			{'B',101,{{91,78,85},
				  {65,74,89},
				  {92,73,59}
				 }
			},
			{'C',102,{{95,73,68},
				  {59,64,86},
				  {90,83,79}
				 }
			}
  		      };
  int i,j,k;
  for(i=0;i<3;i++)
  {
    printf("%c %d ",s[i].name,s[i].rollno);
    printf("\n");
    for(j=0;j<3;j++)
    {
      for(k=0;k<3;k++)
      {
	printf("%g ",s[i].marks[j][k]);
	printf("\n");
      }
    }
  }
}

