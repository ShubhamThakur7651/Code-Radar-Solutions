// Your code here...
#include<stdio.h>
struct student{       
    int rollnumber;
    char name[100];
    float marks;
};    
int main(){
    int n;
    scanf("%d",&n);
    struct student students[n];
    for(int i=0;i<n;i++){scanf("%d %s %f",&students[i].rollnumber,&students[i].name,&students[i].marks);}
    for(int i=0;i<n;i++){printf("Roll Number: %d, Name: %s, Marks: %.2f\n",students[i].rollnumber,students[i].name,students[i].marks);}
    return 0;}