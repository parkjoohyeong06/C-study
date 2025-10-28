#include <stdio.h>

void printArray(int array[], int len) { //출력 
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", array[i]);
	}
}

void sortArray(int array[], int len) { //오름차순
	int i;
	int temp;
	int minIndex;
	for(i = 0; i<len; i++){
	    minIndex = i;
	    for(int j = i; j<len; j++){
    		if (array[j] < array[minIndex]) {
				minIndex = j;
			}
	    }
	    temp = array[i];
	    array[i] = array[minIndex];
	    array[minIndex] = temp;
	}
}

int main(void) {
	int score[] = { 99, 84, 91, 78, 89 };
	int array_length = sizeof(score) / sizeof(score[0]);
	sortArray(score, array_length);
	printArray(score, array_length);
	return 0;
}
