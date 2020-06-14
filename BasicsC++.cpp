//So, here we have the Basics of C++
/**************************************/

//PROGRAM_1 > HELLO WORLD
#include<iostream>
using namespace std;
void hello()
{
   cout<<"HELLO WORLD";
}

//PROGRAM_2 > Creating and Using C++ Variables
void var(){
    int age =20;
    float average = 34.87;
    char sex = 'm';
    bool pass = true;
    cout<<age<<endl<<average<<endl<<sex<<endl<<pass;
}

//PROGRAM_3 > Arithmetic Operators in C++
void opertr(){
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
//PROGRAM_7 > Using the Ternary Operetor( ?: )
void ternary(){
    int marks;
    cout<<"Enter your exam marks: ";
    cin>>marks;
    marks>=35 ? cout<<"Well Done! You are passed." : cout<<"Sorry,try again.You are failed";
}

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

//PROGRAM_9 > Using the WHILE loop 
void While()
{
    int i=1;
    while(i<=15){
        cout<<i <<"> Hello"<<endl;
        i++;
    }
}   

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

//PROGRAM_11 > Using the 'for' loop
void For()
{
    int i;
    for( i=1;i<=10;i++){
        cout<<i <<"> This is Vilgax"<<endl;
    }
}

//PROGRAM_12 > Introduction to Arrays
void arr()
{
    int marks[6] = {65,87,76,90,84,68};
    cout<<marks[5];
}

//PROGRAM_13 > Introuction to multi-dim Arrays
void MultiArr()
{
    int marks[3][6] = 
    {
        {78,98,65,78,96,90},
        {60,56,75,87,56,74},
        {67,87,90,65,76,59}
    };
    cout<<marks[2][4];   //> 76 will be printed
}

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

//PROGRAM_16 > Default Parameters           
void disp(int x=76,int y=98,int z=34)
{
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;
    cout<<"z is "<<z<<endl;
}
int main(){
    disp(45,65,87); //here the values declared in main function will be compiled 
}

//PROGRAM_17 > Use of inline function 
inline void inlFn(int a)
{
    cout<<"the value of a is "<<a<<endl;
}
int main()
{
    int a=67; //a = 'local variable'
    //inlFn(67);  instead of calling the fn we just print the code line in main() fn.
    cout<<"the value of a is "<<a<<endl;
    return 0;
}

//PROGRAM_18 > The Local & Global Variables
void locglo();
int x = 100; //this is Global Variable )
//(A global variable is always declared outside all the functions.Hence it is declared for the whole program) 
int main()
{
    locglo();
    return 0;
}
void locglo()
{
    int x = 100; //This is Local Variable.
    cout<<"x is "<<x;
}//Local Variable is declared inside the func.Hence it'll work for both locglo() & main() function.


//PROGRAM_19 > Using Break Statement
void Break()
{
    int i;                        
    for( i=1; i<=5; i++)
    {
        int k;
        for( k=1; k<=3; k++)
        {
        cout<<k<<endl;
        if (k==2)          //12 will be printed 5 times,as the statement is broken at in var 'k'
        break;             //12 12 12 12 12
        }
    } 
}
//PROGRAM_20 > Using 'Continue Statement'
void Continue(){
    int i=1;
    while( i<=10 )
    {
    if( i==3 )
        {
        i++;    
        continue;
        }
        cout<<i<<endl;
        i++;
    }
}
//PROGRAM_21 > Using Switch Statement
void Switch(){
    char input;
    cin>>input;
    switch( input ){
    case 'A':
        cout<<"Your grading is Excellent";
        break;
    case 'B':
        cout<<"Your grading is Good";
        break;
    case 'C':
        cout<<"Your grading is Fair";
        break;
    case 'D':
        cout<<"Your grading is Not Good";
        break;
    default: {
        cout<<"We don't know your grading,Sorry ";
        }
    }
}
//PROGRAM_22 > Range in 'case' of Switch statement
void RangeinSwitch()
{
    char input;
    cin>>input;
    switch( input ){
    case 'A' ... 'G':  //> syntax of Range 
        cout<<"You pressed a char b/w A and G";
        break;
    case 'h':
        cout<<"You pressed small h";
        break;
    case 'R':
        cout<<"You pressed R";
        break;
    case 'T' ... 'U':  //> syntax of Range 
        cout<<"You presssed a char b/w T and U";
        break;
    default: {
        cout<<"We don't know what you pressed ('~')";
        }
    }
}
//PROGRAM_23 > Multiple 'Return' statements in functions
bool check(int age);  //func prototype
int main()
{
    if(check(4))
    cout<<"You are adult";
    else
    cout<<"You are a kid";
    return 0;
}
bool check(int age)
{
    if( age >= 18)
        return true;
    else
        return false;
}   

//PROGRAM_24 > Using Address Operator(&) to get memory loc
void AdrsOp()
{
    int age=34, weight=78;
    cout<<age<<endl;  // 34
    cout<<&age<<endl;  // 0x61ff0c  The memory loc of var 'age'
    cout<<weight<<endl;  // 78
    cout<<&weight<<endl;  // 0x61ff08  The memory loc of var 'weight'
}
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
    Break();
    Continue();
    Switch();
    RangeinSwitch();
    AdrsOp();
}