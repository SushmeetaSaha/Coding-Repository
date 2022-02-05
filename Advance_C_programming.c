#include<stdio.h>
void greet(char string[],int age){
    // char *ptr = string;
    printf("Welcome %s\n",string);
    printf("Age %d\n",age);
}
int sum(int a , int b ){
    return a + b;
}
int main() {
    greet("Shauary",28);
    int answer = sum(2,3);
    printf("The value of answer is %d \n",answer);
    return 0;
}