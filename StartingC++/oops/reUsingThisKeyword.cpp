#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int rollNo;
    float marks;

    // this refers to the data members of the class but the variable without this refers to the parametrs

    Student(string name, int rollNo, float marks){
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
    }

};

int main(){
    // Student s;
    // s.name = "Natansh";
    // s.rollNo = 75;
    // s.marks = 99.9;

    Student s("Natansh",75,99.9);


    cout << s.name << "\n";
    cout << s.marks << "\n";
    return 0;
}