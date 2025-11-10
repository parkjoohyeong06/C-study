#include <stdio.h>

void func(int x) {
    int guess; // 사용자가 입력할 값

    while (1) {
        printf("이 정수를 맞추어 보세요 >> ");
        scanf("%d", &guess);
        printf("\n");

        if (guess > x)
            printf("맞추어야 할 정수가 입력한 %d 보다 작습니다.\n", guess);
        else if (guess < x)
            printf("맞추어야 할 정수가 입력한 %d 보다 큽니다.\n", guess);
        else {
            printf("축하합니다! 정답은 %d 입니다.\n", x);
            break;
        }
    }
}
 
   
int main(){
	int x=0;
	scanf("%d", &x);
	func(x);
	return 0;
}
