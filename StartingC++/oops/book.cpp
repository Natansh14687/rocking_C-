#include<bits/stdc++.h>
using namespace std;

class Book{
    public:
    string name;
    float price;
    int numberOfPages;

    int countBooks(int p){
        if(price < p) return 1;
        else return 0; 
    }

    bool isBookPresent(string title){
        if(name == title) return true;
        else return false;
    }
};

int main(){
    Book harryPotter;
    harryPotter.name = "Harmoini";
    harryPotter.price = 600;
    harryPotter.numberOfPages = 500;
    cout << harryPotter.countBooks(590) << "\n";
    cout << harryPotter.isBookPresent("Harmoini");
    return 0;
}