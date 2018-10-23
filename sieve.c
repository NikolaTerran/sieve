#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"

int sieve(int h, int* list, int counter){
	int i = 0;	
	while(i <= counter){
		if(h % list[i] == 0){		
			h = 0;
			break;
		}
		else if(i > counter){
			break;	
		}
		else{
			i++;
		}
	}
	return h;
}
