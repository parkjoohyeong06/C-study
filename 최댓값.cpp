#include <stdio.h>

int max_row=0, max_col=0;

int inspect(int arr[10][10]){
	int max = arr[0][0];
	for(int k=0;k<9;k++){
		for(int m=0;m<9;m++){
			if(arr[k][m] > max){
				max = arr[k][m];
				max_row = k;
				max_col = m;
			}
		}
	}
	return max;
}

int main(){
	int arr[10][10], max;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++)
			scanf("%d", &arr[i][j]);
	}
	max = inspect(arr);
	printf("%d\n%d %d", max, max_row+1, max_col+1);
	return 0;
}
