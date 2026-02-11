#include <stdio.h>
#define LEN 6
#define GROUP_BY 3
#define MAX(a, b) (a>=b ? a : b)

int arr[LEN][LEN];

int main(){
    for(int i = 0; i < LEN; i++){
        for(int j = 0; j < LEN; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0, max = 0;
    int val = LEN - GROUP_BY + 1;
    for(int i = 0; i < val; i++){
        for(int j = 0; j < val; j++){
            sum = 0;
            for(int k = 0; k < GROUP_BY; k++){
                for(int l = 0; l < GROUP_BY; l++){
                    if(k == 1 && (l == 0 || l == 2)){continue;}
                    sum += arr[i+k][j+l];
                }
            }
            max = MAX(max, sum);
        }
    }

    printf("\n%d\n", max);
    return 0;
}
