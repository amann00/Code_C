#include<iostream>
using namespace std;
void pontr()
{
    int val = 5;
    //default datatype pointernames >
    int *ip;      
    char *ch;
    double *dp;    
    float *fp;

    ip = &val;
    cout<<"Variable value "<<val<<endl;
    cout<<"Address in Pointer "<<ip<<endl;
    cout<<"Pointer pointing to value "<<*ip<<endl;
}
int main()
{
    pontr();     
}
/* OUTPUT >
Variable value 5
Address in Pointer 0x61ff08
Pointer pointing to value 5 */