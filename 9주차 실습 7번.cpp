#include <stdio.h>
int sum(int x){
	int i, total=0;
	for(i=1;i<=x;i++){
		total+=i;
	}
	return total;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return 0;
}
