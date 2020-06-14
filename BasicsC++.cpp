//So, here we have the Basic Programs of C++
/*******************************************/

//PROGRAM_1 > HELLO WORLD
#include<iostream>
using namespace std;
void hello()
{
   cout<<"HELLO WORLD";
}
/*******************************************/

//PROGRAM_2 > Creating and Using C++ Variables
void var()
{
    int age =20;
    float average = 34.87;
    char sex = 'm';
    bool pass = true;
    cout<<age<<endl<<average<<endl<<sex<<endl<<pass;
}
/*******************************************/

//PROGRAM_3 > Arithmetic Operators in C++
void opertr()
{
    int num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    cout<<num1<<"%"<<num2<<"="<<num1%num2<<endl;
    num1/=num2;
    cout<<"num1 = num1 / num2: "<<num1;
}
/********************************************/

//PROGRAM_4 > if..else Statement
void ifelse()
{
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if (age <= 17)
    {
        cout<<"Soryy('~')you can't Vote"<<endl;
    }
    else
    {
        cout<<"Hurry('_')you can Vote"<<endl;
    }
}
/********************************************/

//PROGRAM_5 > Nested if..else Statement
void nestedifelse()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=30)
    {
        cout<<"You are young"<<endl;
    }
    else if(age<=50){
        cout<<"You are in Middle Age"<<endl;
    }
    else{
        cout<<"You are old"<<endl;
    }
}
/*******************************************/

/*PROGRAM_6 > Use of Logical and Comparison Operators
(<,>,<=,>=,!=,==) with multiplw if..else Statements */
void CompOp()
{
    int date;
    cout<<"Enter Date: ";
    cin>>date;
    if( date<=31 && date>=1 ) //Runs when both conditions are fulfilled  
    {
        cout<<"The date is valid"<<endl;
    }
    else{
        cout<<"This date is invalid"<<endl;
    }
    if(date == 1 || date == 7) //Runs when atleast one condition fulfilled 
    {
        cout<<"It might be my or my sister's B'day"<<endl;
    }
    if( date == 20 )
    {
        cout<<"This is the prettiest day for me always('_')"<<endl;
    }
    if( date == 28 )
    {
        cout<<"This is an unlucky day for me('~')"<<endl;
    }
}    
/*******************************************/

//PROGRAM_7 > Using the Ternary Operetor( ?: )
void ternary()
{
    int marks;
    cout<<"Enter your exam marks: ";
    cin>>marks;

    marks>=35 ? cout<<"Well Done! You are passed." : cout<<"Sorry,try again.You are failed";
}
/******************************************/

//PROGRAM_8 > Finding largest of 2 no using Ternary Operator
void ter()
{
    int maxNo,n1,n2;
    cout<<"Enter two no: ";
    cin>>n1>>n2;
    //largest of 2 no
    maxNo = (n1 > n2) ? n1 : n2;
    cout<<"Largest no between "<<n1<<" and "<<n2<<" is "<<maxNo;
}
/******************************************/

//PROGRAM_9 > Using the WHILE loop 
void While()
{
    int i=1;
    while(i<=15)
    {
        cout<<i <<"> Hello"<<endl;
        i++;
    }
}   
/*****************************************/

//PROGRAM_10 > Using the do..while loop >
void Dowhile()
{
    char input;
    do{
        cout<<"Hey! How are you ? This is Vilgax here('_') "<<endl;
        cout<<"Tell me something about you,something that i should know."<<endl;
        cout<<"If you wanna quit this conversation,then press Q."<<endl;
        cin>>input;
    }
    while( input != 'Q');
    cout<<"The conversation is ended. Thanks"<<endl;
}
/*****************************************/

//PROGRAM_11 > Using the 'for' loop
void For()
{
    int i;
    for( i=1;i<=10;i++){
        cout<<i <<"> This is Vilgax"<<endl;
    }
}
/***************************************/

//PROGRAM_12 > Introduction to Arrays
void arr()
{
    int marks[6] = {65,87,76,90,84,68};
    cout<<marks[5];
}
/**************************************/

//PROGRAM_13 > Introuction to multi-dim Arrays
void MultiArr()
{
    int marks[3][6] = 
    {
        {78,98,65,78,96,90},
        {60,56,75,87,56,74},
        {67,87,90,65,76,59}
    };
    cout<<marks[2][4];
}
/**************************************/

//PROGRAM_14 > Use of function prototype
void FnProto();  //this is prototype of function

int main()
{
    FnProto();
}

void FnProto()
{
    cout<<"A function prototype is a declaration of a function"<<endl; 
    cout<<"that specifies the function's name and type signature"<<endl;
    cout<<"but omits the function body."<<endl;
    cout<<"It is generally written above the main() function."<<endl;
}
/****************************************/

//PROGRAM_15 > Use of Function Parameters
int display(int ,int); //> function prototype

int main()
{
    int result;
    result = display(45,67);
    return 0;
}
int display(int a,int b)
{
    cout<<a<<" + "<<b<<" = "<<a+b;
    int result = (a+b);
    return a+b;
}
/****************************************/

//PROGRAM_16 > Default Parameters           
void disp(int x=76,int y=98,int z=34)
{
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;
    cout<<"z is "<<z<<endl;
}
int main()
{
    disp(45,65,87); //here the values declared in main function will be compiled 
}
/***************************************/

//PROGRAM_17 > Use of inline function 
inline void inlFn(int a)
{
    cout<<"the value of a is "<<a<<endl;
}
int main()
{
    int a=67;
    //inlFn(67);  instead of calling the fn we just print the code line in main() fn.
    cout<<"the value of a is "<<a<<endl;
    return 0;
}
/***************************************/

//PROGRAM_18 > 

int main()
{
    opertr();
    ifelse();
    nestedifelse();
    CompOp();
    ter(); 
    While();
    Dowhile();
    For();
    arr();
    MultiArr();
}
