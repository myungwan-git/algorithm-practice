#include <stdio.h>
int main() {
    short count = 0;
    scanf("%hd", &count);

    for(int i=1; i<=count; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}