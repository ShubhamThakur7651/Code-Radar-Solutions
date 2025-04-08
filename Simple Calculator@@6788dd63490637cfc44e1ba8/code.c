// Your code here...
#include<stdio.h>
int main(){
    int a,n;
    char op;
    scanf("%d %d %c",&a,&n,&op);
    if (op=='+'){
        int sum;
        sum= a + n;
        printf("%d",sum);}
    else if(op=='-'){int sub;
    sub=a-n;
    printf("%d",sub);}
    else if(op=='*'){
        int mul;
        mul=a*n;
        printf("%d",mul);
    }
    else if(op=='/'){
        if(n==0){printf("error");}
        else{int div;
        div =a/n;
        printf("%d",div);}
    }
    return 0;
}