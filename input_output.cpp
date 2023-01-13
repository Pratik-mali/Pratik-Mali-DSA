#include<iostream>
#include<string>
using namespace std;

int main(){
    string full_name;
    string my_name;
    cout<< "Enter your full name here" << endl;
    // cin >>  full_name; //Does not aloows value after space if Pratik Mali entered only Pratik will displayed
    // cout << full_name << endl;

    getline(cin, my_name); // Allows to use space seperated values in line

    cout<< my_name;

    return 0; 
}