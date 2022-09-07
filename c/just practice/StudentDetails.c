#include <stdio.h>
typedef struct {
  char StudentName[50];
  int StudentId;
  char Gender;
  int Marks[5];
  double Percentage;
}s;
int main() {
  FILE *p1;
  s s1[100];
  p1 = fopen("details.txt", "w");
  if (p1 == NULL)
  {
    return 0;
  }
  int n;
  printf("enter the no. of students = ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    printf("\n%d student\n",i+1);
    //stduent name
    printf("student name = ");
    scanf("%s",s1[i].StudentName);
    fprintf(p1,"%s ",s1[i].StudentName);
    //student id
    printf("student id = ");
    scanf("%d",&s1[i].StudentId);
    fprintf(p1,"%d ",s1[i].StudentId);
    printf("student gender(M/F/O) = ");
    scanf(" %c",&s1[i].Gender);
    fprintf(p1," %c ",s1[i].Gender);
    //student marks and percentage
    printf("student marks of 5 subject = ");
    int s=0;
    for(int j=0;j<5;j++){
        scanf("%d",&s1[i].Marks[j]);
        s+=s1[i].Marks[j];
    }
    s1[i].Percentage = s/5.0;
    printf("\n%f\n",s1[i].Percentage);
    fprintf(p1,"%f\n",s1[i].Percentage);
    
  }
  fclose(p1);
  p1 = fopen("details.txt", "r");
  for (int i = 0; i < n; i++) {
    fscanf(p1,"%s %d %c %f",s1[i].StudentName,&s1[i].StudentId,&s1[i].Gender,&s1[i].Percentage);
    printf("\n%s %d %c %f",s1[i].StudentName,s1[i].StudentId,s1[i].Gender,s1[i].Percentage);
  }
  return 0;
}