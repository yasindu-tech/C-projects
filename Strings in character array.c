#include<stdio.h>

main(){

char myName[]="Yasindu Gamage";
int size=sizeof(myName);
int myNum[3]={12,14,25};
char yourName[20];
char againyourName[20];
/*

printf("My name is %s",myName);
printf("\n Size= %d",size);
printf("\n String terminator is %s",myName[14]);
printf("\n String terminator is %d",myName[14]);*/

//user inputs in a array

/*
// without spaces
printf("Input your name:");
scanf("%s",&yourName);
printf("Your name is: %s ",yourName);*/

// with spaces
printf("Input your name:");
fgets(againyourName,sizeof(againyourName),stdin);
printf("Your name is:");
puts(againyourName);
getch();

}
