// Your code here...
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int pos=0;
    if(a==0){
      printf("-1");
      return 0;
    }
    while((a&1)==0){
        a>>=1;
        pos++;
    }
    printf("%d",pos);
    return 0;
}