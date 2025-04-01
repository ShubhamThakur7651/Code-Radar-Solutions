// Your code here...
#include<stdio.h>

int main(){
    int N, k;
    scanf("%d", &N);
    for(int i = 1; i<=N; i++){
        for(int j = 1; j>=i; j--){
            printf("%d ",k++);
        }
        printf("\n");
    }

    return 0;
}