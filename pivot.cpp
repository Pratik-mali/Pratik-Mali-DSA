#include<iostream>
using namespace std;

int pivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

int main(){
    int arr[9] = { 6,7,8,9,1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);
    cout << pivot(arr, size) << endl;
    return 0;
}