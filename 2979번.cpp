#include <stdio.h>

int main(){
	int a,b,c, start,end, time[101] = {0}, SUM[101] = {0}, fin=0;
	scanf("%d %d %d", &a,&b,&c);
	for(int i=0;i<3;i++){
		scanf("%d %d",&start,&end);
		for(int i=start;i<end;i++)	// time 배열의 start~(end-1)번째 까지의 수를 +1한다.
			time[i] += 1;
	}
	for(int i=0;i<101;i++){
		SUM[i] = time[i];
		if(time[i] == 1)
			SUM[i] = a * time[i];
		else if(time[i]==2)
			SUM[i] = b*time[i];
		else if(time[i]==3)
			SUM[i] = c*time[i];
	}
	for(int i=0;i<101;i++)
		fin += SUM[i];
	printf("%d",fin);
	return 0;
}
