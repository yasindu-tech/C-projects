#include<stdio.h>

main(){

int science,maths,english,IT,total;
float avg;

printf("Enter marks for science:");
scanf("%d",&science);

printf("Enter marks for maths:");
scanf("%d",&maths);

printf("Enter marks for english:");
scanf("%d",&english);

printf("Enter marks for IT:");
scanf("%d",&IT);

total=science+maths+english+IT;
avg=total/4.0;

printf("Total: %d \n ",total);
printf("Average: %0.3f",avg);

getch();

}
