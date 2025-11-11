#include <stdio.h>
#include <string.h>
int main(){
	char str[100], final[100] = "";
	for(int i=0;i<3;i++){
		gets(str);
		str[strcspn(str, "\n")] = '\0';
		strcat(final, str);
	}
	printf("Merged string length : %d\n", strlen(final));
	printf("Merged string : %s", final);
	return 0;
}
