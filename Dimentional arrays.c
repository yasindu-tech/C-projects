#include <stdio.h>

main(){

//Dimensional array -matrix
//array inside array

int nums [2] [3]={
              {2,4,6},
              {7,8,9}

};
/*
printf(" %d",nums[0][0]);
printf("\n %d",nums[0][1]);
printf("\n %d",nums[0][2]);
printf("\n %d",nums[1][0]);
printf("\n %d",nums[1][1]);
printf("\n %d",nums[1][2]);*/

printf("%d",sizeof(nums[0][0]));
printf("\n %d",sizeof(nums[0]) / sizeof(nums[0][0]));





getch();


}
