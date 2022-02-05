#include<stdio.h>
void Question1(){
    char ptr[20] ;
    gets(ptr);
    printf("The string you entered is : %s\n",ptr);
}
void Question2(char string[]){
    int index = 0;
    int lenght = 0;
    while(string[index]!='\0'){
        index++;
        lenght++;
    }
    printf("The lenght of the string %s is %d ",string,lenght);
}
void Question3(char string[]){
    int index = 0;
    while(string[index]!='\0'){
        printf(" %c ",string[index]);
        index++;
    }
}
int main() {
    // Question1();
    char name[] = "My name is Shauary ";
    // Question2(name);
    Question3(name);
}