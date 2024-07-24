#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;

    Student(string name, int rno, float marks){
        this ->name = name;
        this ->rno = rno;
        this ->marks = marks;
    }
};
void change(Student &s){
    s.name = "bhallu";
}

void change1(Student *s){
    s->name = "lappu";
}
int main(){
    Student s("Natansh",75,100);
    cout << s.name << "\n";

    change(s);
    cout << s.name << "\n";

    Student *ptr = &s;
    cout << (*ptr).name << "\n";

    (*ptr).name = "Gandu";
    cout << s.name << "\n";

    ptr->name = "Nashedi";
    cout << s.name << "\n";

    change1(&s);
    cout << s.name << "\n";


    return 0;
}