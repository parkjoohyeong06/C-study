#include <stdio.h>

int main(){
	int n, paper[100][100] = {0};
	int wid, leng, area = 0; 
	scanf("%d", &n);
	for(int a=0;a<n;a++){
		scanf("%d %d", &wid, &leng);
		for(int i=wid;i<wid+10;i++){
			for(int j=leng;j<leng+10;j++){
				if(paper[i][j] == 0)
					area++;
				paper[i][j] = 1;
			}
		}
	}
	printf("%d", area);
	return 0;
}
