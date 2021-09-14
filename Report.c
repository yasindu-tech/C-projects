#include <stdio.h>

main(){

//variables

int marks[2][3];
char name[20],sub1[10],sub2[10],sub3[10],sub4[10],sub5[10],grade[5];
char title[]="Report";
int total,avg;

//center
int width = 80;
int length = sizeof(title) - 1;
int pad = (length >= width) ? 0 : (width - length) / 2;

//inputs
printf("Welocme TO Report Maker\n");
printf("Enter the name of the student: ");
fgets(name,sizeof(name),stdin);
printf("Enter the class of the student: ");
fgets(grade,sizeof(grade),stdin);

printf("Enter The name of the first subject:");
fgets(sub1,sizeof(sub1),stdin);
printf("Enter The name of the Second subject:");
fgets(sub2,sizeof(sub2),stdin);
printf("Enter The name of the third subject:");
fgets(sub3,sizeof(sub3),stdin);
printf("Enter The name of the fourth subject:");
fgets(sub4,sizeof(sub4),stdin);
printf("Enter The name of the fifth subject:");
fgets(sub5,sizeof(sub5),stdin);

printf("Enter marks for %s :",sub1);
scanf("%d",&marks[0][0]);
printf("Enter marks for %s :",sub2);
scanf("%d",&marks[0][1]);
printf("Enter marks for %s :",sub3);
scanf("%d",&marks[0][2]);
printf("Enter marks for %s :",sub4);
scanf("%d",&marks[1][0]);
printf("Enter marks for %s :",sub5);
scanf("%d",&marks[1][1]);

//calculations

total=marks[0][0]+marks[0][1]+marks[0][2]+marks[1][0]+marks[1][1];
avg=total/5;

//Output

printf("______________________________________________________________________________________________________________________________");
printf("%*.*s%s\n", pad, pad, " ",title);

printf("Name:");
puts(name);
printf("Grade:");
puts(grade);
printf("Marks");
printf("\n%s %d ",sub1,marks[0][0]);
printf("\n%s %d ",sub2,marks[0][1]);
printf("\n%s %d ",sub3,marks[0][2]);
printf("\n%s %d ",sub4,marks[1][0]);
printf("\n%s %d ",sub5,marks[0][2]);
printf("\n\nTotal:%d",total);
printf("\nAverage:%d",avg);

if(total>35){
    printf("\nPass");
}
else{
    printf("\nFail");

}









































}
