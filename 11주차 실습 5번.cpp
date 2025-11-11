#include <stdio.h>
#include <string.h>

void my_strlen(char str[100]){
	printf("Length : %d", strlen(str));
}
int main(){
	char str[100];
	fgets(str, sizeof(str), stdin);
	my_strlen(str);
	return 0;
}
