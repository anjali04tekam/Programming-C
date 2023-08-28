#include <stdio.h>

int x = 20;
	
int main(){
	int x = 10;
	int func(){
		extern int x;
		printf("%d\n", x);
	}
	func();
	printf("%d\n", x);
	return 0;
}
