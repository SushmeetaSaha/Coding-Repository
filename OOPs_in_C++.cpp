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
