#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

     for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   

    bubbleSort(arr,n);
    return 0;
}