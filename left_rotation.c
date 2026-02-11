#include <stdio.h>

int main(){
    int len, rotate;
    printf("LEN & ROTATE BY: ");
    scanf("%d %d", &len, &rotate);
    int arr[len];

    for(int i = 0; i < len; i++){
        scanf("%d", arr + (i-rotate + len)%len);
    }

    printf("ARR: ");
    for(int i = 0; i < len; i++){
        printf(" %d ", arr[i]);
    }
    return 0;
}
