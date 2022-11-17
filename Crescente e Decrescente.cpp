#include <stdio.h>
 
int main() {
 
    int X;
    int Y;
    
    do {
        scanf("%d", &X);
        scanf("%d", &Y);
        
        if(X < Y) {
            printf("Crescente\n");
        } else if(X > Y) {
            printf("Decrescente\n");
        } else {
            return 0;
        }
    } while(X != Y);
 
    return 0;
}
