#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    float height; 
public:
    Student(string n, float h) {
        name = n;
        height = h;
    }
    void display() const {
        cout << "Name: " << name << ", Height: " << height << " cm" << endl;
    }
    bool operator>(const Student& s) const {
        return height > s.height;
    }
    bool operator<(const Student& s) const {
        return height < s.height;
    }
    bool operator==(const Student& s) const {
        return height == s.height;
    }
};
int main() {
    string name1, name2;
    float h1, h2;
    cout << "Enter first student's name and height (in cm): ";
    cin >> name1 >> h1;
    cout << "Enter second student's name and height (in cm): ";
    cin >> name2 >> h2;
    Student s1(name1, h1);
    Student s2(name2, h2);
    cout << "\nStudent Details:\n";
    s1.display();
    s2.display();
    cout << "\nComparison Result:\n";
    if (s1 > s2)
        cout << name1 << " is taller than " << name2 << ".\n";
    else if (s1 < s2)
        cout << name2 << " is taller than " << name1 << ".\n";
    else
        cout << "Both students have the same height.\n";

    return 0;
}
