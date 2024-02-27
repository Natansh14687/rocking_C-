// Given the age of a person, write a function to check if the person is eligible to vote or not.
#include<iostream>
using namespace std;

bool eligibility(int age, int eligibility_criteria){
    if(age>=eligibility_criteria) return true;
    else return false;
}

int main(){
    int voting_limit = 18, age;
    cin >> age;
    int eligible = eligibility(age, voting_limit);
    if(eligible) cout << "Eligible for voting";
    else cout << "Not-Eligible for voting";
    return 0;
}