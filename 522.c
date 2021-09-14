#include <stdio.h>

int main()
{
    int marks[100][100];
    int sum=0;
    float avg=0;
    int count1=0;
    int count2=0;
    int X;
    int stu=0;
    float sub=0;


    //Getting the number of subjects and students

    printf("Enter the number of students:");
    scanf("%d",&stu);

    printf("Enter the number of subjects:");
    scanf("%f",&sub);

    while (count1<stu)
    {
        sum=0;
        avg=0;
        count2=0;
       while (count2<sub)
       {
         printf("Enter the marks of subject %d of student %d :",count2+1,count1+1);
         scanf("%d",&X);
         marks[count1][count2]=X;
         count2++;

         sum=sum+X;


       }
       printf("Sum= %d\n",sum);

       avg=sum/sub;
       printf("Average=%f\n",avg);
       printf("|-----------------------------------------|\n");

       count1++;


    }







}
