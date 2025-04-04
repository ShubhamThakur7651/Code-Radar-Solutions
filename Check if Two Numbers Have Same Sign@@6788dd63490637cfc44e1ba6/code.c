// Your code here...
#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a ^ b >=0){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }

    return 0;
}