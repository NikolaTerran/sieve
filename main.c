#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"

int main(int argc, char *argv[]){//doesn't do anything

  int target = 10000;
  printf("%d\n",target);
  int list[1000000];//any number larger than 1000000 will cause seg-fault

  int iterations = 2;
  int first_prime = 2;

  list[0] = 2;
  int list_counter = 0;

  while(list_counter != target){
	int holder = sieve(iterations,list,list_counter);
	if(holder != 0){
		list_counter++;	
		list[list_counter]=holder;		
	}
	iterations++;
  }

  int ans = list[target - 1];
  printf("The n=%d prime is %d\n", target, ans );
  return 0;

}
