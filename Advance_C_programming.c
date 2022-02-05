#include<stdio.h>
void greet(char string[],int age){
    // char *ptr = string;
    printf("Welcome %s\n",string);
    printf("Age %d\n",age);
}
int main() {
    greet("Shauary",28);
    return 0;
}