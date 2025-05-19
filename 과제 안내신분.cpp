#include <stdio.h>

int main(){
	int ab[30] = {0}, n;
	for(int i=0;i<28;i++){
		scanf("%d", &n);
		ab[n-1]=1;  }
	for(int j=0;j<30;j++){
		if(ab[j] == 0)
			printf("%d\n", j+1);  }
	return 0;
}
