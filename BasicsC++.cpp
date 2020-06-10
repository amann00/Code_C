/*So, here we are going to start C++.Lets Begin the Part_1 of basics and 
here is some thereotical information about the language that we must know
before starting the programs.

Constants > 
1. 44 , 87 , 6 > Integer constants
2. 34.6 , 65.12 > Floating Point constants
3. ‘a’  ‘C’  > Character Constants
4. ‘Salman’ , ‘Aman’  > String Constants

Variables > 
A variable is nothing, but the name given to a memory location in order to
access it easily. A variable is a name which is associated with a value that
can be changed. For example when I write int num=20; here variable name is 
num which is associated with value 20, int is a data type that represents 
that this variable can hold integer values.
*/
//////////////////////////////////////////////////////////////////////////////

//PROGRAM_1 > HELLO WORLD
#include<iostream>
using namespace std;
int main()
{
   cout<<"HELLO WORLD";
   return 0;
}

//////////////////////////////////////////////////////////////////////////////

/*
Datatypes > 
Data types define the type of data a variable can hold, for example an 
integer variable can hold integer data, a character type variable can 
hold character data etc. Data types in C++ are categorised in three groups: 
Built-in, user-defined and Derived.
DATA TYPE     SIZE (in Bytes)
int                     2 or 4 
float                 4
double             8
char                  1
wchar_t            2
bool                   1
void                   0

KEYWORDS >
Keywords are those words whose meaning is already defined by Compiler.
These keywords cannot be used as an identifier. Note that keywords are 
the collection of reserved words and predefined identifiers. The keyword
main is a prime example
cout and cin are not key words in the C++ language. They are variables, 
instances of classes, that have been declared in <iostream>. 
cout is a variable of type ostream.
*/


//PROGRAM_2 > Creating and Using C++ Variables
#include<iostream>
using namespace std;
int main()
{
    int age =20;
    float average = 34.87;
    char sex = 'm';
    bool pass = true;

    cout<<age<<endl<<average<<endl<<sex<<endl<<pass;
}

////////////////////////////////////////////////////////////////////////////////
/*
OPERATORS > 
Arithmetic operators are the symbols that represent arithmetic math operations.
Examples include + (addition operator), - (subtraction operator), 
* (multiplication operator), and / (division operator).

/        Division       Returns Quotient value
%      Modulus      Returns Remainder value
++    Increment      Inc value of var by 1        a=a+1     ++a or a++(Prefix)
—     Decrement    Dec value of var by 1          a=a-1     --a or a--(Postfix)
*/


//PROGRAM_3 > Arithmetic Operators in C++
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Enter two numbers"<<endl;
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////

//PROGRAM_3 > 