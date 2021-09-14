#include<stdio.h>

main(){

int a,b,temp;

printf("Enter a value for A:");
scanf("%d",&a);

printf("Enter a value for B:");
scanf("%d",&b);


printf("Before swapping: \n A=%d \n B=%d",a,b);

temp=a;
a=b;
b=temp;

printf("\n After swapping: \n A=%d \n B=%d",a,b);

getch();


}


