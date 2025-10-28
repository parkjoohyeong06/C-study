#include <stdio.h>
int subtract(int a, int b){
	int final = a-b;
    if(final<0)
        final = final * (-1);
    return final;
}
int main(void) {
	int n1, n2;
    printf("Enter two integers : ");
    scanf("%d %d", &n1, &n2);
    printf("Subtraction result : %d\n", subtract(n1, n2));	
	return 0;
}
