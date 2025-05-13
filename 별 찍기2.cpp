#include <stdio.h>

int main(){
	int i,j,k, n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){	//ÁÙ¹Ù²Þ
		for(j=1;j<=n-i;j++)	//°ø¹éÂï±â 
			printf(" ");
		for(k=1;k<=i;k++)	//º°Âï±â
			printf("*");
	printf("\n");
	}
	return 0;
}
