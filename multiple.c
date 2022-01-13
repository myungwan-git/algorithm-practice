#include <stdio.h>
int main() {
    
    short multipleNum = 0;
    scanf("%hd", &multipleNum);

    for(short i=1; i<10; i++) {
        printf("%d * %d = %d \n", multipleNum,i,multipleNum*i);
    }

    return 0;
}