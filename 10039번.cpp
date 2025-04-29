#include <stdio.h>

int main(){
    int arr[5], sum = 0;
    for(int i=0;i<5;i++){
        scanf("%d", &arr[i]);
        if (arr[i] < 40) arr[i] = 40;
        sum += arr[i];
    }
    int average = sum / 5;
    printf("%d\n", average);
    return 0;
}
