#include <stdio.h>
/* This is a function to check whether a number is prime or not */
int hello(int n){
    for(int j = 2; j<n;j++){
        if(n%j==0){
            return 1;
        }
    }
    return 0;
}

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
void pattern2(void){
    for(int j = 1; j<=5; j++){
         for(int k = 1; k<=5; k++){
		if(j<=k){
		    printf(" *");
		}
		else{
	            printf(" ");
		}
	 }
	 printf("\n");
    }
}
/* This will print a triangle but not a reversed triangle */
void pattern4(void){
     for(int j = 1; j<=5; j++){
	if(j%2!=0){
	      for(int k = 5; k>=1; k--){
		 if(j>=k){
			printf(" *");
		}
		else{
		        printf(" ");
		}
	       }
		printf("\n");
       }
     }
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
    /*
    int array[] = {100,22,32};
    int s = max(array,2);
    printf("The greatest element is %d\n",s);
    */
    /*
    int user;
    printf("Enter the number who's table you want \n");
    scanf("%d",&user);
    for(int j = 1; j<=10; j++){
        printf("%d × %d = %d\n",user,j,user*j);
    }
    
    int s = sum(10);
    printf("The sum of first 10 natural number is %d\n",s);
    
    
    
    Dynamic_memory_Allocation();
    char string[20] = "Shauary Saha";
    int question = occur(string,'S');
    if(question==0){
    puts("The string does not have this character in it");
    }
    pattern();
    */
     /* This is a for loop which will use the hello function
        To check whether a number is prime or not the function
        Will return 1 if not prime and 0 if it is a prime number  */
     for(int n = 3; n<=100;n++){
        s = hello(n);
        if(s==0){
            printf("%d\n",n);
        }
    }
    return 0;
}
