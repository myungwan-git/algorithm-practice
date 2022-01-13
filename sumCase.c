#include <stdio.h>
int main() {
    short count = 0;
    scanf("%hd", &count);
    int sumArr[count];

    for(int i=0; i<count; i++) {
        short num1,num2;
        scanf("%hd %hd",&num1,&num2);
        sumArr[i] = num1+num2;
    }
    for(int i=0; i<count; i++) {
        printf("Case #%d: %d \n", i+1, sumArr[i]);
    }

    return 0;
}