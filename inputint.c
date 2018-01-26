#include <stdio.h>
int main(){
	int number, x, y;
	printf("Type a number: \n");
	scanf("%d", &number);
	printf("You typed: %d\n", number);
	x = number * number;
	printf("number * number = %d\n", x);
	return 0;
}
