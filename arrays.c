#include <stdio.h>

//array
main(){
    int myNum[6]={20,30,10,50,15};
    char myChar[3]={'A','B','C'};
    int sum =myNum[2]+myNum[4];

  printf("My favourite number is %d",myNum[2]);
  printf("My name starts from %c",myChar[0]);

  //arithmetic operations and replacements
printf("Sum= %d",sum);
printf("\n myNum1 before replacing %d",myNum[1]);
myNum[1]=sum;
printf("\n myNum1 after replacing %d",myNum[1]);


printf("myNum[5] before replacing %d",myNum[5]);
myNum[5]=sum;
printf("\n myNum[5] after replacing %d",myNum[5]);




 getch();









 }



