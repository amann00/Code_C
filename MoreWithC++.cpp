//More with C++

//PROGRAM_1 > Introduction to POINTERS 
#include<iostream>
#include<string>
using namespace std;
void pontr()
{
    int val = 5;
    //default datatype pointernames >
    int *ip; //holds the address of int variable
    char *ch;
    double *dp;    
    float *fp;  
    //Pointer is a variable that holds the address of another variable.
    ip = &val;
    cout<<"Variable value "<<val<<endl;
    cout<<"Address in Pointer "<<ip<<endl;
    cout<<"Pointer pointing to value "<<*ip<<endl;
}
/* OUTPUT >
Variable value 5
Address in Pointer 0x61ff08
Pointer pointing to value 5 */

//PROGRAM_2 > Pointers
void Pont()
{
    int age = 24;
    bool human = true;

    int *agepntr;
    bool *humanpntr;

    agepntr = &age;
    humanpntr = &human;

    cout<<"age"<<" >> "<<*agepntr<<endl;
    cout<<"human"<<" >> "<<*humanpntr<<endl;

    cout<<"agepntr"<<" >> "<<agepntr<<endl;
    cout<<"humanpntr"<<" >> "<<humanpntr<<endl;
}
/* OUTPUT >
age >> 24
human >> 1
agepntr >> 0x61ff04
humanpntr >> 0x61ff03 */

//PROGRAM_3 > Passing an array to function
void pasarr(int [],int);  //func prototype
/*int main()
{
    int marks[] = { 34,97,56,45,89 };
    int length = 5;
    pasarr(marks,length); //func call
    return 0;
}
void pasarr(int marks[],int length)
{
    for(int i=0; i<length; i++)  //i=0 & i<length as its an array 
    {
        cout<<marks[i]<<endl;
    }
}*/
//PROGRAM_4 > Relation b/w Array & Pointer
void pntr()
{
    int numbers[] = { 34,65,87,97,58 };
    cout<<numbers[3]<<endl;  //array
    cout<<*numbers+3<<endl;  //pointer
}
/*OUTPUT >
97
97  */

//PROGRAM_5 > "Const" keyword with function and array
void Const(const int num[],int limit);
/*int main()
{
    int num[] = { 78,96,57,48,30 };
    int limit =5;
    Const(num,limit);
    return 0;

}
void Const(const int num[],int limit) //"const" keyword used for fixed values 
{
for(int i=0;i<limit;i++)
{
    cout<<num[i]<<endl;
}
}*/
//PROGRAM_6 > Array ranges with Pointers
/*void display(const int *start,const int *end);
int main()
{
    int numbers[] = { 34,65,35,95,42,64,75,14,54 };
    display(numbers+4,numbers+9); //Array ranges to be printed
    return 0;
}
void display(const int *start,const int *end){
    const int *pntr;
    for( pntr=start; pntr!=end; pntr++ )
    {
        cout<<*pntr<<endl;
    }
}*//*OUTPUT >
42
64
75
14
54
*/

//PROGRAM_7 > Introduction to Structures
/*struct Students{
    int RollNo; // -Structure members
    char Gender; // -Structure members
}Ajay,Rahul,Mohini; // -Structure variables
int main()
{
    Students Aman = {0323,'M'};

    Ajay.RollNo = 1232; //Dot. Operator(Used for direct member selection via variables)
    Ajay.Gender = 'M';

    Rahul.RollNo = 6236;
    Rahul.Gender = 'M';  

    Mohini.RollNo = 4532;
    Mohini.Gender = 'F';

    cout<<Mohini.RollNo<<endl<<Mohini.Gender<<endl;
}*/
//PROGRAM_8 > Arrow Operator with Pointers to access Structure members
/*struct student{
    int RollNo;
    char Gender;
}Dev;
int main()
{
    student Dev;
    student *Devptr;
    Devptr = &Dev;
    Dev.RollNo = 431; //For accessing struc member using Var then Dot.Oper is used. 
    Devptr->Gender = 'M'; //For accessing struc member using Pont Var then Arrow Oper is used.
    cout<<Devptr->Gender<<endl;
    cout<<Dev.RollNo<<endl;
    return 0;
}
/*OUTPUT >
M
431
*/

//PROGRAM_9 > Passing Structure to Func by Value, Pointer(Address).
/*struct student{
    int RollNo;
    int Age; // > Members
    char Gender;
}Aman,Yuktika; // > Variables

void display(student Aman);
void show(student *Yuktika); // function Prototypes

int main()
{
    student Aman = { 213,21,'M' };
    student Yuktika = { 345,19,'F' };
    show(&Yuktika); //func call
    cout<<endl;
    display(Aman); //func call
    
}
void display(student Aman){
    cout<<Aman.RollNo<<endl;  //struct variables
    cout<<Aman.Age<<endl;
    cout<<Aman.Gender<<endl; 
    Aman.RollNo = 3134;
}
void show(student *Yuktika){
    cout<<Yuktika->RollNo<<endl; //struct address
    cout<<Yuktika->Age<<endl;
    cout<<Yuktika->Gender<<endl;
}

//PROGRAM_10 > Nested structure having Dot Operator.
struct Address{
    int HouseNo;
    string Locality;  // }struct members
};
struct EmployeeDetails{
    string Name;
    int Id;
    string Dept;  // }struct members
    int Salary;
    Address adr; 
}Rohit;  // }struct variables

void Emp(EmployeeDetails Rohit);  //func prototype

int main()
{
    EmployeeDetails Rohit = { "Rohit",10154,"Manufacturing",75000 };
    Rohit.adr.HouseNo = 425;
    Rohit.adr.Locality = "M.G Road";

    Emp(Rohit);  //func call
}
void Emp(EmployeeDetails Rohit){
    cout<<"Name: "<<Rohit.Name<<endl;
    cout<<"ID: "<<Rohit.Id<<endl;
    cout<<"Department: "<<Rohit.Dept<<endl;  
    cout<<"Salary: "<<Rohit.Salary<<endl;
    cout<<"House No: "<<Rohit.adr.HouseNo<<endl;
    cout<<"Locality: "<<Rohit.adr.Locality<<endl;
}
//PROGRAM_11 > Nested structure having Arrow Operator...1
struct EmployeeDetails{
    string Name;
    int Id;
    string Dept;  // }struct members
    int Salary;
    int HouseNo;
    string Locality; 
}Pritha;  // }struct variable

void Details(EmployeeDetails *Pritha);  //func prototype

int main()
{
    EmployeeDetails Pritha = { "Pritha",10534,"Marketing",125000,43,"GTB Nagar" };

    Details(&Pritha);  //func call
    return 0;
}
void Details(EmployeeDetails *Pritha){
    cout<<"Name: "<<Pritha->Name<<endl;
    cout<<"ID: "<<Pritha->Id<<endl;
    cout<<"Department: "<<Pritha->Dept<<endl;  
    cout<<"Salary: "<<Pritha->Salary<<endl;
    cout<<"House No: "<<Pritha->HouseNo<<endl;
    cout<<"Locality: "<<Pritha->Locality<<endl;
}*/
//PROGRAM_12 > Nested structure having Arrow Operator...2
/*struct address{
    int HouseNo;
    string StreetAd;
};
struct Labour{
    int Id;
    string Name;
    address *addr;
}Akash;

void Lab(Labour *Akashptr);

int main()
{
    Labour Akash;
    Labour *Akashptr;
    Akashptr = &Akash;

    Akashptr->Id = 12677;
    Akashptr->Name = "Akash";
    address adr = { 435,"Jhakar Kati" };
    Akashptr->addr =  &adr;
    Lab(&Akash);
}
void Lab(Labour *Akashptr)
{
    cout<<Akashptr->Id<<endl;
    cout<<Akashptr->Name<<endl;
    cout<<Akashptr->addr->StreetAd<<endl;
    cout<<Akashptr->addr->HouseNo<<endl;
}

//PROGRAM_13 > Nested Structures having both Dot and Arrow Operators.
struct Address{
    int House_No;  
    string Street_Address;  // }struct members
};
struct Student_Details{
    int RollNo;
    string Name;
    string College;  // }struct members
    Address addr;
    Address ads;
};
void display(Student_Details Radha);  //func prototype
void show(Student_Details *Amanptr);  //func prototype

int main() 
{
    Student_Details Radha;
    Radha.RollNo = 3145421;
    Radha.Name = "Radha";
    Radha.College = "MD University";
    Radha.addr.House_No = 445;
    Radha.addr.Street_Address = "DLF Colony";

    Student_Details Aman;
    Student_Details *Amanptr;  //pointer
    Amanptr = &Aman;

    Amanptr->RollNo = 5332426;
    Amanptr->Name = "Aman";
    Amanptr->College = "IPU";
    Amanptr->ads.House_No = 45;
    Amanptr->ads.Street_Address = "Sector 14";
    
    display(Radha);
    show(Amanptr);   //func call
}
void display(Student_Details Radha){    

    cout<<"RollNo: "<<Radha.RollNo<<endl;
    cout<<"Name: "<<Radha.Name<<endl;
    cout<<"College: "<<Radha.College<<endl;
    cout<<"House_No: "<<Radha.addr.House_No<<endl;
    cout<<"Street Address: "<<Radha.addr.Street_Address<<endl;
    cout<<endl;
}
void show(Student_Details *Amanptr){  
      
    cout<<"RollNo: "<<Amanptr->RollNo<<endl;
    cout<<"Name: "<<Amanptr->Name<<endl;
    cout<<"College: "<<Amanptr->College<<endl;
    cout<<"House_No: "<<Amanptr->ads.House_No<<endl;
    cout<<"Street Address: "<<Amanptr->ads.Street_Address<<endl;
    cout<<endl;
}

//PROGRAM_14 > Size of Data Types, Variables, Structures.
struct Student{
    int Id;  //struct members
    char Name; 
}David;  //struct variable
void display(); //func prototype
int main()  
{
    display();  //func call
}
void display()  
{
    int age;
    cout<<"Size of variable Age: "<<sizeof(age)<<endl;
    cout<<"Size of variable char: "<<sizeof(char)<<endl;
    cout<<"Size of variable Double: "<<sizeof(double)<<endl;
    cout<<"Size of variable float: "<<sizeof(float)<<endl;
    cout<<"Size of variable Structure: "<<sizeof(Student)<<endl;
    cout<<"Size of Struct Var David: "<<sizeof(David)<<endl;
}

//PROGRAM_15 > Introduction to Unions

//*A Union is nothing but a user-defined data type similar to structure.
//*In unions we can store only one value at a time in the same memory location.
//*The memory is shared between members of struct.
//*Only the last variable can be directly used.
union employee{
    int Id;
    float Salary;
}John;
int main()
{
    employee John;
    John.Id=324;
    John.Id=42200;
    cout<<John.Id<<endl;
    cout<<John.Salary<<endl;
}*/

//PROGRAM_16 > New and Delete Keyword|Dynamic Memory Allocation
void Dyn(){
    int *pointer;
    pointer = new int; //allocating new dynamic memory location
    *pointer = 435;
    cout<<*pointer;
    delete pointer;  //Deallocating created memory location
}

//PROGRAM_17 > Dynamically allocating Arrays depending on user input



int main(){
    //pntr();
    Dyn();
}

