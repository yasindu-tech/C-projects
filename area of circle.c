#include<stdio.h>

main(){

const float PI=3.14;
float r,Area;

printf("Enter the radius:");
scanf("%f",&r);

Area=PI*(r*r);
printf("Area= %f",Area);

getch();
}
