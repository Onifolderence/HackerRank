#include <stdio.h>

void show_arr(char *str, int *arr, int len){
    puts(str);
    for(int i = 0; i < len; i++){
        printf(" %d ", *(arr+i));
    }
    printf("\n");
}

int main(){
    int len = 0;
    printf("LEN: ");
    if(scanf("%d", &len) != 1){
        return -1;
    }

    int arr[len];
    int rev[len];

    for(int i = 0; i < len; i++){
        scanf("%d", arr+i);
    }

    for(int i = 0; i < len; i++){
        rev[i] = arr[len-i-1];
    }

    show_arr("ARR:", arr, len);
    show_arr("REV:", rev, len);
    return 0;
}
