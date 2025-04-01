#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        for(int j = N - i; j > 0; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
