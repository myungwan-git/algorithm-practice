//26부터 시작한다. 2+6 = 8이다. 새로운 수는 68이다
#include <stdio.h>
int main() {
    // first number ( START )
    short startNumber = 0;
    scanf("%hd", &startNumber);

    // 십의자리 숫자와 일의자리 숫자
    short firstNum = 0, secondNum = 0;

    // 십의자리숫자 + 일의자리숫자의 결과값
    short sum = 0;

    // 만들어 낼 새로운 숫자
    short total = startNumber;

    // 반복을 실행한 횟수 ( 원하는 값을 찾아내기 까지 )
    short result = 0;

    while(1) {
        firstNum = total/10;
        secondNum = total%10;
        sum = (firstNum + secondNum) % 10;
        
        total = secondNum*10 + sum;
        result++;
        if(total == startNumber) {
            printf("%d \n", result);
            break;
        }
    }
    return 0;
}