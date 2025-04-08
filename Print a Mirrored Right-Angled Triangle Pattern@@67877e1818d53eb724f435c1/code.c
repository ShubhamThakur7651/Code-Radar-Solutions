// Your code here...
#include<stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=a-1;j>=i;j--){
            printf(" ");
        }
        for(int z=1;z<=i;z++){
            printf("*");
        }
        printf("\n");}
}