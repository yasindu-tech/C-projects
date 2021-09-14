//Bitwise operators
/* & -and
  | -or
  ^ -XOR
  ~ -complement
  << -shift left
  >> -shift right */

#include<stdio.h>

main(){

  int a =10;
  int b=15;
  int c,d;

  printf("Binary and bitwise= %d",a&b);
  printf("\n Binary or bitwise= %d \n",a|b);
  printf("Bitwise XOR= %d \n",a^b);
  printf("Bitwise complement= %d \n",~a);

  c=a>>2;
  printf("Right shift= %d \n",c);

  d=b<<2;
  printf("Right shift= %d",d);


















 getch();
}
