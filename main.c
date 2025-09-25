#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int time;
    int sec;
    int min;
    int hour;
    
    printf("input the second: ");
    scanf("%i", &time);
    
    hour = time / 3600;
    min = (time % 3600) / 60;
    sec = (time % 3600) % 60;
    
    
    printf("The time for %i second is %i : %i : %i", time, hour, min, sec);
    
    system("PAUSE");
    return 0;
}
