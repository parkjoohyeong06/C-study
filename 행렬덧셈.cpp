#include <stdio.h>

int main(){
	int a,b, n,sum, i,j, arr1[100][100], arr2[100][100]; //a:행 b:열
	scanf("%d %d",&a, &b);
	for(i=0;i<a;i++){ //첫번째 행렬 
		for(j=0;j<b;j++)
			scanf("%d", &arr1[i][j]);
	}
	for(i=0;i<a;i++){ // 두번째 행렬
		for(j=0;j<b;j++)
			scanf("%d", &arr2[i][j]);
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++)
			printf("%d ", arr1[i][j] + arr2[i][j]);
		printf("\n");
	}
	return 0;
}
