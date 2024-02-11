// Print the first multiple of 5 which is also a multiple of 7.
#include<iostream>
using namespace std;
int main() {
    int multiple = 5;
    while(true){
    if(multiple %5 == 0 && multiple %7 == 0 ){
    cout << ("The first multiple of 5 and 7 is ") << multiple << endl;
    break;
    }
    else multiple++;
    }
    return 0;
}