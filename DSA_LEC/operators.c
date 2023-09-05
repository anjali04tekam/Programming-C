#include <stdio.h>

// Arithmetic Operators
// Assignment Operators
// Relational and logical operators
// Bitwise operators

int main() {
	int a = 20, b = 2;
	
	a = a + b;
	a += b;
	
	a = a - b;
	a -= b;
	
	a = a * b;
	a *= b;
	
	a = a/b;
	a /= b;
	
	a += 1;
	a -= 1;
	
	a++;
	++a;
	a--;
	--a;
	
	printf("%d\n", a);
	return 0;
}
