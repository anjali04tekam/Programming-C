#include <stdio.h>

int main(int argc, char* argv[]){
	if (argc == 1){
		printf("NO commandline arguments!\nEnter your name as command\n");
		return 0;
	}
	printf("Hello, %s\n", argv[1]);
	return 0;
}
