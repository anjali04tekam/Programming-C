#include <stdio.h>

int main() {
	long int m;
	
	printf("Enter your MIS: ");
	scanf("%ld", &m);
	
	if ( m >= 612203001 && m <= 612203100 ) {
		printf("You are in Div. 1!\n");
	}
	else if ( m >= 612203101 && m <= 612203199 ) {
		printf("You are in Div. 2...\n");
	}
	else {
		printf("You are not from CS!!!\n");
	}
	
	// Following code is also valid
	/*
	if ( m >= 612203001 && m <= 612203100 )
		printf("You are in Div. 1!\n");
	else if ( m >= 612203101 && m <= 612203199 )
		printf("You are in Div. 2...\n");
	else
		printf("You are not from CS!!!\n");
	*/
	
	return 0;
	
}
