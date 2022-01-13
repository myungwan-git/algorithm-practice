#include <stdio.h>
int main() {

    short hour = 0, minute = 0;
    scanf("%hd %hd", &hour, &minute);
    
    // 10 10 -> 9 25
    
    minute -= 45;
    if(minute < 0) {
        hour -= 1;
        if(hour < 0) {
            hour = 23;
        }
        short temp = minute * -1;
        minute = 60 - temp;
    }
    printf("%d %d", hour, minute);
    

    return 0;
}