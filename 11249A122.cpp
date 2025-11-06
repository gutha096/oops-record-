#include<iostream>
using namespace std;
class student{
    public:
    //constructor
    student(){
        cout<<"constructor clled!"<<endl;
    }
    //destructor
   ~student(){
        cout<<"destructor called !"<<endl;
    }
    void display(){
    cout<<"inside display function"<<endl;}
};
int main(){
    cout<<"creating object1"<<endl;
    student s1;//constructor called
    s1.display();
    cout<<"exiting main..."<<endl;
    return 0;
}
    //destructor called automatically wnen d1 goes out of scope