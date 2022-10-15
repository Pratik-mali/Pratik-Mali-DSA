#include<iostream>
using namespace std;

int selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
            
        }
    swap(arr[minIndex], arr[i]);
    }
    
    for(int k = 0; k <n; k++){
        cout << arr[k] << " " ;
    }
}

int main(){
    int arr[8] = {2, 4, 54, 65, 45, 32, 23, 44};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
    return 0;
}
