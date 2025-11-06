#include<iostream>
using namespace std;
namebook()
{
    private :
    char acc[],bookname[],author[]
    int pages,accno;
    float price;
    public :
    void getdetails()
{
    cout<<"enter ibsno";
    cin>>ibsno;
    cout<<"enter the bookname";
    cin>>boookname;
    cout"enter author";
    cin>>author;
    cout<<"enter pages";
    cin>>pages;
    cout<<"enter accno";
    cin>> accno;
    cout<<"enterprice";
    cin>>price;
}
void display()
{
    cout<<"ibsno"<<ibsno;
    count<<"booknam"<<bookname;
    cout<<"author"<<author;
    cout<<"pages"<<pages;
    cout<<"accno"<<accno;
    cout<<"price"<<price;
}
int main()
{
book b;
b.getdetails();
b.display();
}