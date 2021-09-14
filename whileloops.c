#include<stdio.h>

int main(void){

 char name[5]={"Yasindu","Sanduli","Thamindu","Indra","Thilak"};
 int count=0;
 int size=sizeof(name)/sizeof(name[0]);

 while(count<size){

    printf("Hello, %s \n",name[count]);
    count++;
 }



}
