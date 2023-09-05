#include <stdio.h>
  
int main(){

    int var = 2;
    
    switch (var) {
    case 1:
        printf("Case 1 is executed\n");
        break;
    case 2:
        printf("Case 2 is executed\n");
        break;
    default:
        printf("Default Case is executed\n");
    }
    
    // What if I don't include break here?
  
    return 0;
}
