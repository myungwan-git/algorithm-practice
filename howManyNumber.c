// 문제를 읽고 이해한다.
    // 세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
    // 예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 
    // 계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
    // A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은 자연수이다.
// 어떻게 해결할지 계획을 세운다.
    // 자연수를 입력받을 inNum1,inNum2,inNum3을 선언 및 0으로 초기화
    // 3개의 자연수 곱을 저장할 inNumMultipleResult 선언 및 0으로 초기화
    // 0~9까지의 각 숫자의 횟수를 저장할 길이 10의 배열 선언 및 0으로 초기화
    // inNumMultipleResult의 값을 10,100,1000 ... 으로 나누기 위한 division 선언 및 1으로 초기화
    // 무한반복문 -> division은 10부터 시작. inNumMultiple/division == 0 -> 반복문 종료
    // division == 10 -> 그냥 %10 으로 배열에 저장. eachNumberCountArr[inNumMultiple%division] += 1
    // 외에 inNumMultiple/(division/10) 의 값을 다시 %division 해서 처음 저장했던 맨 우측 숫자를 제외한 최신 우측숫자를 배열에 저장.
    // 반복문으로 배열 출력.
// 계획을 검증한다.
// 프로그램으로 구현한다.

#include <stdio.h>
int main() {
    int inNum1 = 0, inNum2 = 0, inNum3 = 0;
    int inNumMultipleResult = 0;
    int eachNumberCountArr[10] = {0,};
    scanf("%d %d %d", &inNum1, &inNum2, &inNum3);
    inNumMultipleResult = inNum1 * inNum2 * inNum3;
    
    int divisionNum = 1;

    while(1) {
        if( (inNumMultipleResult / divisionNum) == 0) {
            break;
        } else {
            divisionNum *= 10;
            if(divisionNum == 10) {
                int result = inNumMultipleResult % divisionNum;
                eachNumberCountArr[result] += 1;
            } else {
                int deleteEndNumber = inNumMultipleResult / (divisionNum/10);
                int result = deleteEndNumber % 10;
                eachNumberCountArr[result] += 1;
            }
        }
    }
    for(int i=0; i<=9; i++) {
        printf("%d \n", eachNumberCountArr[i]);
    }
    
    return 0;
}