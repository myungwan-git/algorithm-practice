#include <stdio.h>
int main() {

	int arr1[10];
	int arr2[10];
	int arr3[10];
	int arr4[10];
	int count = 0;
	int i, j;

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr1[i]);
		arr2[i] = arr1[i] % 42;
		arr3[i] = arr1[i] % 42;
		arr4[i] = arr1[i] % 42;
	}
	
	for (i = 0; i < 10; i++) {
		for (j = i+1; j < 10; j++) {
			if (arr2[i] == arr3[j]) {
                arr4[j] = -3;
            }
				
		}
	}

	for (i = 0; i < 10; i++) {
		if (arr4[i] != -3)
			count++;
	}
	
	printf("%d \n", count);

	return 0;
}