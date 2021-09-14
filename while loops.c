#include<stdio.h>

//while loop
main(){
/*
int count=0;

while(count<15){

    printf("\n You got %d rupees",count+1);
    count++;
}
*/

int marks[10]={55,45,66,77,88,71,56,44,31,88};
int count=0;
int sum=0;
int size=sizeof(marks)/sizeof(marks[0]);


while(count<size){
    printf("Student %d got %d marks\n",count+1,marks[count]);
    sum=sum+marks[count];
    count++;
}

printf("Sum = %d",sum);














}
