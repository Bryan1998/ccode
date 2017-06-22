#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	printf("Hello world! \n");
	int x = rand() % 3;
	printf("x = %d \n", x);
	if (x == 2) {
		printf("integer x is equal to 2 \n");
	} else {
		printf("integer x is not equal to 2 \n");	
	}
	return 0;
}
