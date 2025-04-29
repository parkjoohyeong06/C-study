#include <stdio.h>

int main(){
	int h,m,add;
	scanf("%d %d", &h,&m);
	scanf("%d", &add);
	m = m+add;
	if (m >= 60) {
        h += m / 60;
        m = m % 60;			// m에 m/60을 한 나머지를 넣는다. 
    }

    else if (h >= 24) {
        h = h % 24;  		// h에 h/24를 한 나머지를 넣는다. 
    }

	printf("%d %02d", h, m);
	return 0;
}
