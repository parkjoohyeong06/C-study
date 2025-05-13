#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){ //ฐ๘น้ 
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
