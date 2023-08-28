#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    printf("Enter a number between 1 and 9: ");
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int N = n + 1;
    for (int i = 1; i < N; i++) {
        for (int k = (N-n-1); k > 0; k--) {
            printf("%d ", n+k);
        }
        for (int j = 0; j < (2*n-1); j++) {
            printf("%d ", n);    
        }
        for (int k = 1; k <= (N-n-1); k++) {
            printf("%d ", n+k);
        }
        printf("\n");
        n--;
    }
    n += 2;
    for (int i = N-1; i > 1; i--) {
        for (int k = (N-n-1); k > 0; k--) {
            printf("%d ", n+k);
        }
        for (int j = 0; j < (2*n-1); j++) {
            printf("%d ", n);    
        }
        for (int k = 1; k <= (N-n-1); k++) {
            printf("%d ", n+k);
        }
        printf("\n");
        ++n;
    }
    
    return 0;
}
