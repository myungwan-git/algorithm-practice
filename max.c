// 문제를 읽고 이해한다.
// 문제를 익숙한 용어로 재정의한다.
// 어떻게 해결할지 계획을 세운다.
    // 9개의 변수를 저장할 배열 inputArr을 선언한다. 9개의 값을 입력받는다.
    // 최대값 max는 inputArr[0], 최대값위치 index는 1로 선언 및 초기화한다.
    // 9번 반복으로 차례대로 inputArr[i]와 max비교하며 조건을 충족하면 해당 inputArr[i]를 max에 , i 를 index에 주입한다.
    // max와 index을 출력한다.
// 계획을 검증한다.
// 프로그램으로 구현한다.
// 어떻게 풀어는지 돌아보고, 개선할 방법이 있는지 찾아본다.

#include <stdio.h>
int main() {
    int inputArr[9];
    int max = 0, index = 1;
    for(int i=0; i<9; i++) {
        scanf("%d", &inputArr[i]);
    }
    
    max = inputArr[0];
    
    for(int i=0; i<9; i++) {
        if(max < inputArr[i]) {
            max = inputArr[i];
            index = i+1;
        }
    }

    printf("%d\n%d\n",max,index);
    
    return 0;
}