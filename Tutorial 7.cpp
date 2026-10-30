//Implementation of exception handling 
#include <iostream>
using namespace std;


int main() {
    int a,b,c;
   
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
   
    try {
        if (b==0)
        throw b;
        c = a/b;
        cout<<"\n divsion \t"<<c;
        }
   
    catch(int x){
        cout<<"divide by zero is not possible ";
        cout<<"\n error due to number : "<<x;


    }
    cout<<"\n at the end of function";
    // c = a/b;
    // cout<<"the value of c :"<<c<<endl;
    // cout<<"\n at the end of the main function";
    return 0;
}
