#include <stdio.h>

int main(){
	int a,b,c,max=0,reward;
	scanf("%d %d %d", &a,&b,&c);
	if(a==b&&b==c) {
		reward = 10000+a*1000;
		printf("%d",reward); }
	else if(a==b&&b!=c) {
		reward = 1000+a*100;
		printf("%d",reward); }
	else if(c==b&&b!=a) {
		reward = 1000+b*100;
		printf("%d",reward); }
	else if(a==c&&c!=b){
		reward = 1000+a*100;
		printf("%d",reward);
	}
	else if(a!=b&&b!=c){
		if(a>max)
			max = a;
		else if(b>max)
			max = b;
		else if(c>max)
			max = c;
	reward = max*100;
	printf("%d",reward);
	}
	return 0;
}
