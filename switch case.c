#include<stdio.h>
//switch case

main(){

char grade;

printf("Enter your grade:");
scanf("%c",&grade);

switch (tolower(grade))
{
case 'a':
    printf("Well done!");
    break;
case 'b':
     printf("Good Job!");
    break;
case 'c':
    printf("Not Bad!");
    break;
case 's':
    printf("Ok!");
    break;
default:
     printf("You have to work hard !");
    break;

}


getch();
}
