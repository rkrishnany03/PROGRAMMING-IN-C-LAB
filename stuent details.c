#include<stdio.h>
#include<string.h>
struct std
{
  char name[3];
  int age;
  float mark;
}s[5];
int main()
{
  int i;
printf("Enter the stuent details \n");
for(i=0;i<3;i++)
{
  printf("Enter the name\t");
  scanf("%s",s[i].name);
  printf("Enter the age\t");
  scanf("%d",&s[i].age);
    printf("Enter the mark\t");
  scanf("%f",&s[i].mark);
}
printf("the student details are \n");
printf("Name\tage\tmark\n");
for(i=0;i<3;i++)
{
  printf("%s\t  %d\t%f\n",s[i].name,s[i].age,s[i].mark);

}
return 0;
}