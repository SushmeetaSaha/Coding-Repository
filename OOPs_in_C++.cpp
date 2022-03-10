#include <bits/stdc++.h>
using namespace std;

void name(string name){
    cout<<"YOU are "<<name;
}
/*
Four Pillars of OOPs

1. Encapsulation. ----> Public , Private and Protected
2. Inheritance.
3. Abstraction.
4. Polymorphism

*/
/*
class A{
    public:
        void show(){
            cout<<"Hello YesSmartyPie"<<endl;
        }
};
class B : public A{
    
};
class C : public A{
    
};
class D : public B,public C{
    
};
*/
class shop
{
    int itemId[10];
    int itemPrice[10];
    int counter;

public:
    void setPrice(void);
    void displayPrice(void);
    void start(void) { counter = 0; };
};
void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Id of the product is " << itemId[i] << endl;
        cout << "Price of the product is " << itemPrice[i] << endl;
    }
}
void shop ::setPrice(void)
{
    cout << "Enter the id of the product" << endl;
    cin >> itemId[counter];
    cout << "Enter the price of the product" << endl;
    cin >> itemPrice[counter];
    counter++;
}

class library{
    int bookNumber;
    string bookAuthor[10];
    string bookName[10];
    public:
        void start(void){bookNumber=0;}
        void setBooks(void);
        void displayBooks(void);
        void search(void);
};
void library :: setBooks(void){
    cout<<"Enter the book name"<<endl;
    cin>>bookName[bookNumber];
    cout<<"Enter the name of the author of the book "<<bookName[bookNumber]<<endl;
    cin>>bookAuthor[bookNumber];
    bookNumber++;
}
void library :: search(void){
    string name,author;
    cout<<"Enter the name of the book you are searching "<<endl;
    cin>>name;
    cout<<"Enter the name of the author of the book "<<name<<endl;
    cin>>author;
    for (int j = 0; j < bookNumber; j++) 
    {
        if(bookName[j]==name && bookAuthor[j]==author){
            cout<<"We have this book "<<name <<" and the author is "<<author<<endl;
        }
    }
    
}
void library :: displayBooks(void){
    for (int j = 0; j < bookNumber; j++)
    {
        cout<<"Book : "<<bookName[j]<<endl;
        cout<<"Author : "<<bookAuthor[j]<<endl;
    }
    
}

class binary
{
private:
    string binary_string;

public:
    void display(void);
    void chk_binary(void);
    void take(void);
    void change_binary(void);
};
void binary ::display(void)
{
    chk_binary();
    cout << "The binary number " << binary_string << endl;
}
void binary ::take(void)
{
    cout << "Enter a binary number" << endl;
    cin >> binary_string;
}

void binary ::chk_binary(void)
{
    for (int j = 0; j < binary_string.length(); j++)
    {
        if (binary_string.at(j) != '1' && binary_string.at(j) != '0')
        {
            cout << "This is not a valid binary number";
            exit(0);
        }
    }
}
void binary ::change_binary(void)
{
    chk_binary();
    for (int j = 0; j < binary_string.length(); j++)
    {
        if (binary_string.at(j) == '0')
        {
            binary_string.at(j) = '1';
        }
        else if (binary_string.at(j) == '1')
        {
            binary_string.at(j) = '0';
        }
    }
}
// class Complex;
// class Calculator{
//     public:
//         void sum(int a,int b){
//             cout<<"The sum of the numbers are "<<a+b<<endl;
//         }
//         void sum_complex(Complex a1,Complex a2);
// };
// class Complex{
//     int a,b;
//     friend void Calculator :: sum_complex(Complex a1,Complex a2);
//     public:
//         void display(){
//             cout<<"The number you give is "<<a<<" + "<<b<<"i"<<endl;
//         }
//         void set_number(int n, int h){
//             a = n;
//             b = h;
//         }
// };
// void Calculator :: sum_complex(Complex a1,Complex a2){
//     cout<<"The sum of the numbers you give is "<<a1.a+a2.a<<" + "<<a1.b+a2.b<<"i"<<endl;
// }

class Complex{
    int a,b;
    public:
        friend void sum_complex(Complex a2,Complex a1);
        Complex(int d=0,int c=0){
            a = d; 
            b = c;
        }
        void display(){
            cout<<"The number you give is "<<a<<" + "<<b<<"i"<<endl;
        }
};
void sum_complex(Complex a2,Complex a1){
    Complex a3((a1.a + a2.a) , (a1.b + a2.b));
    a3.display();
}
inline float square(int a
){
    return a*a;
}
class Point{
    int x,y;
    public:
        friend float distance_between(Point ,Point);
        Point(int a,int b){
            x = a;
            y = b;
        }
        void display_pointer(){
            cout<<"The Cordinates are "<<"("<<x<<" , "<<y<<")"<<endl;
        }
};
float distance_between(Point a2,Point a1){
    float distance = sqrt(square(a1.x-a2.x)+square(a1.y-a2.y));
    return distance;
}

int sum_natural(int n){
    if (n<=1)    
    {
        return 1;
    }
    return n+sum_natural(n-1);
    
}

const float global_interest_on_loan = 10;
float percentage_into_number(int amount,int percentage){
    return (percentage*amount)/100;
}
class Bank{
    int principal;
    int year;
    float interestRate;
    float returnAmount;
    public:
        float simpleInterest(Bank );
        void loan_from_the_bank(int ,int );
        Bank(int p,int y,float interest){
            principal = p;
            year = y;
            interestRate = interest;
        }
        Bank(){};
};
float Bank :: simpleInterest(Bank obj){
    obj.returnAmount = obj.principal+(percentage_into_number(obj.principal,obj.interestRate)*year);
    return obj.returnAmount;
}

void Bank :: loan_from_the_bank(int amount,int years_to_pay){
    int total_amount;
    total_amount = amount + (years_to_pay*global_interest_on_loan);
    cout<<"You have to return "<<total_amount<<" rupees to the bank on the amount of "<<amount<<" on the interest rate of "<<global_interest_on_loan<<"% "<<endl;
}
class give{
    protected:
       int a,b;
    public:
        void set(int h1,int h2){
            a = h1;
            b = h2;
        }
        void display(){
            cout<<a<<" + "<<b<<"i "<<endl;
        }
        
        int give_a(){
            return a;
        }
        
        int give_b(){
            return b;
        }
};

class sum : public give{
    public:
       void Sum(give j1,give j2){
           cout<<"The sum is "<<j1.give_a()+j2.give_a()<<" + "<<j1.give_b()+j2.give_b()<<"i ";
       }
};
class A1{
    int data1;
    public:
       A1(int a){
           data1 = a;
           cout<<data1<<endl;
           cout<<"A1"<<endl;
       }
};

class A2{
    int data2;
    public:
       A2(int a){
           data2 = a;
           cout<<data2<<endl;
        }
};

class A3 : public A1,public A2{
    int data3;
    public:
        A3(int a,int b,int c):A2(b),A1(a){
           data3 = c;
           cout<<data3<<endl;
        }
};

class A{
    public:
    A(){
        cout<<"A"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"B"<<endl;
    }
};
class C : public A,public B{
    public:
    C(){
        cout<<"C"<<endl;
    }
};
void pattern(int n,char a='A') {
    char b = a;
    int run = 1;
    while(run<=n) {
        for(int i = 1; i<5; i++) {
            for(int k = 0; k<i; k++) {
                cout<<b;
            }
            cout<<endl;
        }
        b++;
        run++;
    }
}
int table_printing(int n=7) {
    for (int i = 1; i <= n ; i++ ) {

        for (int j = 1; j <= i ; j++ ) {

            cout<<" "<<i*j;

        }
        cout<<endl;
    }
}
/* This is a function bill genrator
   Which will sum all the number you passed to it 
   If you give 0 as input the loop will break and it
   Will show you the grand total
*/
void bill_genrator(void){
int user;
    int sum = 0;
    while(true){
      cout<<"Enter "<<endl;
      scanf("%d",&user);
      if(user == 0){
         break;
      }
      
      sum = sum + user;
     
      cout<<"The sum so far is "<<sum<<endl;
    }
    cout<<"The grand total is "<<sum<<endl;
}
void pattern2(){
    for(int i = 5; i>=1;i--){
        for(int j = 1; j<=5; j++){
            if(i>=j){
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
}
class Complex_advance{
      int a,b;
      public:
         void setData(int a,int b){
             this->a = a;
             this->b = b;
         }
         void show(){
             cout<<"The complex number is "<<a<<" + "<<b<<"i "<<endl;
         }
         Complex_advance operator+(Complex obj){
              Complex_advance temp;
              temp.a = a + obj.a;
              temp.b = b + obj.b;
              return temp;
         }
};
/*
The below classes are the example of the use of 
virtual function during the run time
Name of the classes are:
1. Cwh
2. CwhVideo
3. CwhText
*/
class Cwh{
	protected:
	   string title;
	   float rating;
	public:
	   Cwh(float rating,string title){
	   	this->rating = rating;
	   	this->title = title;
	   }
	   Cwh(){}
	   virtual void display(){}
};
class CwhText : public Cwh{
	int words;
	public:
	      CwhText(int words,float rating,string title):Cwh(rating,title){
	      	this->words = words;	
	      }
	      void display(){
	      	cout<<"The name of the tutorial is : "<<title<<endl<<"Rating of the tutorial is "<<rating<<endl<<"No of words in the tutorial is "<<words<<endl;
	      }
};
class CwhVideo : public Cwh{
	int length;
	public:
	      CwhVideo(float length,float rating,string title):Cwh(rating,title){
	      	this->length = length;	
	      }
	      void display(){
	      	cout<<"The name of the tutorial is : "<<title<<endl<<"Rating of the tutorial is "<<rating<<endl<<"The length of the tutorial is "<<length<<" minutes"<<endl;
	      }
};
/* The function pattern3 will print a reverse triangle of the 
shape of (*) 
*/
void pattern3(){
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
		cout<<endl;
       }
     }
}
void file_handling(){
    int total = 0;
    ifstream taking;
    taking.open("hello.txt");
    while (!taking.eof())
    {
        taking>>st2;
        total += stoi(st2) ;
    }
    printf("Hello the sum of the numbers in the file is %d\n",total);	
}
int main()
{
    // Complex a,b;
    // a.set_number(1,2);
    // b.set_number(1,2);
    // Calculator j;
    // // Sum of the complex numbers a and b
    // j.sum_complex(a,b);
    /*
    cout<<"Welcome to the bank"<<endl;
    int amount,y;
    float interest;

    Bank Shauary;
    cout<<"Enter the principal"<<endl;
    cin>>amount;

    cout<<"Enter the year"<<endl;
    cin>>y;

    cout<<"Enter the interest rate"<<endl;
    cin>>interest;

    Shauary = Bank();
    Shauary = Bank(amount,y,interest);
    float REturn = Shauary.simpleInterest(Shauary);
    cout<<"The principal of "<<amount<<" Rupees"<<" after "<<y<<" year will be "<<REturn<<" on the interest of "<<interest<<"% "<<endl;
    */
    return 0;
}
