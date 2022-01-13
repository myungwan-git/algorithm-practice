#include <stdio.h>
int main() {
    int sumCount = 0;
    scanf("%d", &sumCount);
    int sumArr[sumCount];

    for(int i=0; i<sumCount; i++) {
        short num1,num2;
        scanf("%hd %hd",&num1, &num2);
        sumArr[i] = num1+num2;
    }
    for(int i=0; i<sumCount; i++) {
        printf("%d \n", sumArr[i]);
    }

    return 0;
}