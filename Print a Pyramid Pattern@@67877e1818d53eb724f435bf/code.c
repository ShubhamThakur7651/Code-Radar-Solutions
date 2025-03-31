#include<stdio.h>

int main() {
    int N, i, space, j;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        for(space = 1 ; space <= (N-i); space++){
            printf(" ");
        }
        for(j=1; j <= (2*i-1); i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}