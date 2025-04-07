#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=1){printf("Not Prime");}
    for(int i=2;i<=n;i++){
    if(n%i==0){
            printf("Not Prime");
        }return 0;
    if(n%n==0 && n%1==0){
        printf("Prime");
    }
    }
    return 0;
}