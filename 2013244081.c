#include<stdio.h>
#include<stdlib.h>
int main(void){
  int i, j;

  for(i = 4; i < 10; i += 2 ){
    for( j = 0; j <= (10 - i); j++ ){printf(" ");}
		for( j = 0; j <= i * 2; j++ ){printf("*");}
		for( j = 0; j <= (10 - i) * 2; j++ ){printf(" ");}
		for( j = 0; j <= i * 2; j++ ){printf("*");}
		printf("\n");
  }

  return 0;
}
