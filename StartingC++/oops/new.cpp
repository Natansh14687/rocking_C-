#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int rno;
    float marks;

    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
int main(){
    Student *s = new Student("Natansh",75,99.9);
    cout << s->name << "\n";
    s-> name = "Bhallu";
    cout << s->name << "\n";

    return 0;
}