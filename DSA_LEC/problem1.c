#include <stdio.h>

int main() {
	int m = 10;
	int n, n1;
	n = ++m;
	n1 = m++;
	n--;
	--n1;
	n -= n1;
	int x = m++ - n++ + m + --n1; //DO NOT WRITE THIS TYPE OF CODE. IT HAS NO MEANING. 
	printf("%d\n", x);
	return 0;
}
