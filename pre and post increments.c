#include<stdio.h>

main(){

int x=10;
int y=16;
int a,b;

//pre increment
a=++x;
printf("a= %d""\n x= %d",a,x );
//pre decrement
a=--x;
printf("\n\n a= %d""\n x= %d",a,x );
//post increment
a=x++;
printf("\n\n a= %d""\n x= %d",a,x );
//post decrement
a=x--;
printf("\n\n a= %d""\n x= %d",a,x );

}
