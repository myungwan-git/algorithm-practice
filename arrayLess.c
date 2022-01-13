#include <stdio.h>
int main() {
    int count = 0, standard = 0;
    scanf("%d %d", &count, &standard);
    int compareTargetArr[count];
    int compareTargetResult[count];
    int resultNumber = 0;

    for(int i=0; i<count; i++) {
        scanf("%d", &compareTargetArr[i]);
        if(compareTargetArr[i] < standard) {
            compareTargetResult[resultNumber] = compareTargetArr[i];
            resultNumber++;
        }
    }

    for(int i=0; i<resultNumber; i++) {
        printf("%d ",compareTargetResult[i]);
    }
    printf("\n");

    return 0;
}