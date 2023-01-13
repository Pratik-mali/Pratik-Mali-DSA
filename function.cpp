#include<iostream>
using namespace std;

int mult(int a, int b){
    int product = a*b;
    return product;
}

int main(){
    cout <<"Product is:" << mult(3,5) << endl;
    return 0;
}