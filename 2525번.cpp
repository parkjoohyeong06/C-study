#include <stdio.h>

int main(){
	int h,m,add;
	scanf("%d %d", &h,&m);
	scanf("%d", &add);
	m = m+add;
	if (m >= 60) {
        h += m / 60;
        m = m % 60;			// m�� m/60�� �� �������� �ִ´�. 
    }

    else if (h >= 24) {
        h = h % 24;  		// h�� h/24�� �� �������� �ִ´�. 
    }

	printf("%d %02d", h, m);
	return 0;
}
