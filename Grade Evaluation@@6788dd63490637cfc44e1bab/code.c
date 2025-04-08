// Your code here...
#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if (n=='A'){printf("Excellent");}
    else if(n=='B'){printf("Good");}
     else if(n=='C'){printf("Average");}
      else if(n=='D'){printf("Below Average");}
       else if(n=='F'){printf("Fail");}
       else{printf("Invalid grade");}
       return 0;
}