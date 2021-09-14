#include<stdio.h>
// calculator
main(){
double num1,num2,answerA,answerS,answerM,answerD;
char mathOpp;

printf("Welcome to cal 2.0");

printf(" (Addition=a,Subtract=s,Multiplication=m,Division=d \n What do you want to to Do: ");
scanf("%c",&mathOpp);
printf("Enter the First number: ");
scanf("%lf",&num1);
printf(" Enter the Seacond number: ");
scanf("%lf",&num2);


if (mathOpp=='+'){
    answerA=num1+num2;
    printf("Answer=%0.3lf",answerA);
}
else if(mathOpp=='-'){
    answerS=num1-num2;
    printf("Answer=%0.3lf",answerS);

}
else if(mathOpp=='*'){
    answerM=num1*num2;
    printf("Answer=%0.3lf",answerM);

}
else if(mathOpp=='/'){
    answerD=num1/num2;
    printf("Answer=%0.3lf",answerD);

}
else{
    printf("\a Your entered a wrong operation (Addition=a,Subtract=s,Multiplication=m,Division=d)");


}










}
