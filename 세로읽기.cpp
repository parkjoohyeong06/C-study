#include <stdio.h>

int main(){
	int row, col;
	char arr[6][16] = {0};
	for(int i=0;i<5;i++)
		scanf("%s", arr[i]);
	for(col=0;col<15;col++){
		for(row=0;row<5;row++){
			if(arr[row][col] != '\0')
				printf("%c", arr[row][col]);
		}
	}
	return 0;
}
// 1. 2차원 arr배열에 입력을 받음
// 2. arr[i][j]를 final[26] 1차원 배열에 저장함
// finanl[i] 출력 
