#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int x,y;
    
    printf("input 2 integers: ");
    scanf("%i %i", &x, &y);
    
    printf("+ result is %d\n", x+y);
    printf("- result is %d\n", x-y);
    printf("* result is %d\n", x*y);
    printf("/ result is %d\n", x/y);
    printf("%% result is %d\n", x%y);
    
    system("PAUSE");
    return 0;
}
