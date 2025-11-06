#include<iostream>
using namespace std;
class Complex 
{
    int a,b,c;
    public:
    Complex(){}
    void get(){
        cout<<"enter the two numbers:";
        cin>>a>>b;
    }
    void operator ++(){
        a=++a;
        b=++b;
    }
    void operator --(){
        a=--a;
        b=--b;
    }
    void display(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    Complex obj;
    obj.get();
    ++obj;
    cout<<"increment Complex number\n";
    obj.display();
    --obj;
    cout<<" decrement Complex number\n";
    obj.display();
    return 0;
}