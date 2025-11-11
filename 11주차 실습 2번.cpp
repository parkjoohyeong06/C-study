#include <stdio.h>
#include <string.h>

void reverseString(char n[80]){
	for(int i=strlen(n)-1;i>=0;i--)
		printf("%c", n[i]);
}
int main(){
	char n[80];
	fgets(n, sizeof(n), stdin);
	reverseString(n);
	return 0;
}
