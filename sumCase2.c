#include <stdio.h>
int main() {
    short count = 0;
    scanf("%hd", &count);
    short sumArr[count];
    short sumNum1[count];
    short sumNum2[count];

    for(int i=0; i<count; i++) {
        short num1,num2;
        scanf("%hd %hd", &num1,&num2);
        sumArr[i] = num1+num2;
        sumNum1[i] = num1;
        sumNum2[i] = num2;
    }
    
    for(int i=0; i<count; i++) {
        printf("Case #%d: %d + %d = %d \n", i+1, sumNum1[i],sumNum2[i], sumArr[i]);
    }

    return 0;
}