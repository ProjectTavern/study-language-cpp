#include <stdio.h>

int main(void) {
    int hour, min, sec;
    
    double time = 3.76;
    
    hour = (int) time;
    time -= hour;
    time *= 60.0;
    min = (int) time;
    time -= min;
    time *= 60;
    sec = (int) time;
    printf("3.76 time is %d:%d:%d.\n", hour, min, sec);
    
    return 0;
}
