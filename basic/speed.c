#include <stdio.h>

int main(void) {
    int distance;
    int speed;
    
    double time;
    int hour;
    int min;
    double sec;
    
    printf("input distance speed");
    scanf("%d %d", &distance, &speed);
    time = (double)distance / (double)speed;
    
    hour = (int)time;
    time -= hour;
    time *= 60;
    
    min = (int)time;
    time -= min;
    time *= 60.0;
    
    sec = time;
    
    printf("%d:%d:%.3lf\n", hour, min, sec);
    
    return 0;
}
