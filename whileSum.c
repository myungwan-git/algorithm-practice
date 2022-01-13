#include <stdio.h>
int main() {

    short num1 = 0, num2 = 0;
    short count = 0;
    

    while(1) {
        scanf("%hd %hd", &num1, &num2);
        
        if(num1 == 0 && num2 == 0) {
            break;
        }
        printf("%d \n", num1+num2);
        count++;
    }

    return 0;
}