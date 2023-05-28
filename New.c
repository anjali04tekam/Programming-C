# include<stdio.h>
// Taking input as a complete line in C...
int main() 
{
	
    char s[100];
    char p[100] = "Hello!";
    //scanf("%[^\n]%*c", &s);
    printf("Hello, World! Write your name below:\n");
    scanf("%[^\n]s", &s);
    printf("%s\n", s);
    printf("%s", p);
  	// This is something I am writing just to check working of git...
    return 0;
}