#include <stdio.h>
int main() {
    short plus = 0;
    scanf("%hd", &plus);
    int count[plus];
    for(short i=0; i<plus; i++) {
        short num1,num2;
        scanf("%hd %hd", &num1,&num2);
        count[i] = num1 + num2;
    }
    
    for(short i=0; i<plus; i++) {
        printf("%d \n", count[i]);
    }

    return 0;
}