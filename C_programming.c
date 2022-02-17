#include <stdio.h>

void reverse(int list[],int lenght){
    int temp;
    for(int item = 0; item<lenght/2;item++){
        temp = list[item];
        list[item] = list[lenght-item];
        list[lenght-item] = temp;
    }
}
int occur(char string[],char find){
    int answer = 0;
    int index = 0;
    while(string[index] != '\0'){
        if(string[index]==find){
            answer =+ 1;
            printf("The string has the character %c \n",find);
            break;
        }
        index++;
    }
    return answer;
}

void pattern(){
char b = 'A';

	int run = 0;	while(run<=4){

		for(int i = 1; i<6; i++){		

			for(int k = 0; k<i; k++){

				printf("%c",b);

			}

			printf("\n");

		}

		b++;

		run++;

	}

void Dynamic_memory_Allocation(){
    int *ptr = (int *) malloc(4*sizeof(int));
    for(int i = 0; i<4; i++){
        ptr[i] = i+1;
    }
    for(int i = 0; i<4; i++){
        printf("%d\n",ptr[i]
}
int main()
{

    //

    // Practise set
    /*
    int lenght = 9;
    int arr[lenght];
    for(int a = 0;a<=lenght;a++){
        arr[a] = (a+1) * 5 ;
    }
    
    for(int a = 0;a<=lenght;a++){
        printf("The value at element %d is %d \n",a+1,arr[a]);
    }
    
    int arr[4];
    int *pointer = &arr[0];
    printf("The addres stored int the pointer is %d\n",pointer);
    if(pointer+2==&arr[2]){
        printf("Yes the addres and location of the pointer is same");
    }
    else{
        printf("No the address is not same in the pointer");
    }
    
    Repeat problem from taking the input from the user
    int size_of_array ,multipled_by;
    printf("Enter the number you want to multiple\n");
    scanf("%d",&multipled_by);
    printf("Enter the size of the array \n ");
    scanf("%d",&size_of_array);
    size_of_array = size_of_array - 1;
    int array[size_of_array];
    for(int a = 0; a<=size_of_array; a++){
        array[a] = (a+1)*multipled_by;
        printf("The element at index %d is %d \n",a+1,array[a]);
    }
    */
    // Reverse a array in c language in this file Smarty Pie OP Boltai
    // int list[5];
    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;
    // list[3] = 4;
    // list[4] = 5;
    // reverse(list,4);
    // for(int index = 0; index<5; index++)
    // {
    //     printf("%d\n",list[index]);
    // }
    Dynamic_memory_Allocation();
    char string[20] = "Shauary Saha";
    int question = occur(string,'S');
    if(question==0){
    puts("The string does not have this character in it");
    }
    pattern();
    return 0;
}
