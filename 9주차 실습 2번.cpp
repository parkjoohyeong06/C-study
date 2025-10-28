#include <stdio.h>
int min(int a, int b, int c){
	int m;
	if(a<b && a<c)
		m = a;
	else if(b<a && b<c)
		m = b;
	else if(c<a && c<b)
		m = c;
	return m;
}
int main() {
	int n1, n2, n3;
	printf("Enter three integers : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("Smallest value : %d\n", min(n1, n2, n3));
	return 0;
}
