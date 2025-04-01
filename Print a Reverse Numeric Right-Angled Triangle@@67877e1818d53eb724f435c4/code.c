// Your code here...
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i<N; i++){
        for(int j = N-1; j>0; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}