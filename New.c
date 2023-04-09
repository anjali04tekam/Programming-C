# include<stdio.h>
// Taking input as a complete line in C...
int main() 
{
	
    char s[100];
    //scanf("%[^\n]%*c", &s);
    scanf("%[^\n]s", &s);
    printf("Hello, World!\n");
    printf("%s", s);
  	
    return 0;
}