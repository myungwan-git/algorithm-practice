// 문제를 읽고 이해한다.
// 문제를 익숙한 용어로 재정의한다.
// 어떻게 해결할지 계획을 세운다.
    // 처음 입력 숫자의 개수를 받을 변수 count 선언 후 입력받는다. 숫자를 입력받아 저장할 count크기의 배열을 선언한다. 최대값과 최소값을 저장할 변수 max,min 을 선언 및 초기화 한다.
    // 선언한 numArr 배열에 반복문으로 count크기만큼 숫자를 입력받아 저장한다. 
    // numArr[0] 번째 요소를 max, min에 초기화시킨다.
    // count크기만큼 반복하며 numArr요소를 하나씩 꺼내 max,min과 비교하며 max보다 더 크면 해당 numArr요소를 max에 주입시킨다. min도 마찬가지.
    // 반복문이 끝나고 max값과 min 값을 출력한다.
// 계획을 검증한다.
// 프로그램으로 구현한다.
// 어떻게 풀어는지 돌아보고, 개선할 방법이 있는지 찾아본다.

#include <stdio.h>
int main() {
    int count = 0;
    scanf("%d", &count);
    int numArr[count];
    int max = 0, min = 0;
    
    for(int i=0; i<count; i++) {
        scanf("%d", &numArr[i]);
        if(i == 0) {
            max = numArr[0];
            min = numArr[0];
        }
        if(max < numArr[i]) {
            max = numArr[i];
        }
        if(min > numArr[i]) {
            min = numArr[i];
        }
    }
    
    // max = numArr[0];
    // min = numArr[0];

    // for(int i=0; i<count; i++) {
    //     if(max < numArr[i]) {
    //         max = numArr[i];
    //     }
    //     if(min > numArr[i]) {
    //         min = numArr[i];
    //     }
    // }
    printf("%d %d \n", min, max);

    return 0;
}