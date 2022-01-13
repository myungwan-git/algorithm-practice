#include <stdio.h>
int main() {
    short sumCount = 0;
    int sumResult = 0;
    scanf("%hd", &sumCount);
    
    for(int i=1; i<=sumCount; i++) {
        sumResult+=i;
    }
    printf("%d \n", sumResult);

    return 0;
}