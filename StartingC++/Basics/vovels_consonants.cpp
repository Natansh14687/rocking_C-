#include<iostream>
using namespace std;
int main() {
    char character;
    cout << ("Enter the english character in small letters : ");
    cin >> character;
    switch (character) {
        case 'a' :
            cout << ("Vovel") << endl;
            break;
        case 'e' :
            cout << ("Vovel") << endl;
            break;
        case 'i' :
            cout << ("Vovel") << endl;
            break;
        case 'o' :
            cout << ("Vovel") << endl;
            break;
        case 'u' :
            cout << ("Vovel") << endl;
            break;
        default :
            cout << ("Consonant") << endl;
            break;
        
    }
    return 0;
}