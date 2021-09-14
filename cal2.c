#include<stdio.h>

main(){
char mathopp;
float num1,num2;
char name[15];

printf("Enter your name: ");
scanf("%s",&name);

printf("Hi %s Welcome to cal 2.1  \n",name);



printf("Enter the operator:");
scanf("%c",&mathopp);

printf("Enter the numbers(Ex:16,30):");
scanf("%f,%f",&num1,&num2);

switch(mathopp){

case'+':
    printf("%0.2f+%0.2f=%0.2f" ,num1,num2,num1+num2);
    break;
case'-':
    printf("%0.2f-%0.2f= %0.2f",num1,num2,num1-num2);
    break;
case'*':
    printf("%0.2f*%0.2f= %0.2f",num1,num2,num1*num2);
    break;
case'/':
    printf("%0.2f/%0.2f= %0.2f",num1,num2,num1/num2);
    break;
default:
    printf("Wrong Input ");
    break;

getch();
return 0;
}


















getch();
}
