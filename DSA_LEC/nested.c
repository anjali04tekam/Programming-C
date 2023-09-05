#include <stdio.h>
// Funfact: Boolean does not exist in C!!!
// For using boolean data type (bool) you have to include stdbool.h library...
#include <stdbool.h>


int main() {
	bool a = true, b = false;
	
	if (a) {
		printf("a is true\n");
		
		if (b) {
			printf("b is true\n");
		}
		else {
			printf("b is false\n");
		}
	}
	else {
		printf("a is false\n");
	}
	
	return 0;
}
