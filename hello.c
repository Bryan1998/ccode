// Bryan Hernandez (Bryan1998)
// compile gcc hello.c -o hello -lm
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	printf("Hello, ");
	int x = rand() % 2;
	if (x == 2) {
		printf("integer x is equal to 2. \n");
	} else {
		printf("integer x is not equal to 2. \n");	
	}
	return 0;
}
