#include<iostream>
using namespace std;

int binarySearch(int arr[], int item, int size){
    int start = 0;
    int end = size - 1;
    

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if(item == arr[mid]){
            return mid;
        }

        if(item > arr[mid]){
            start = mid + 1;
        }
        if(item < arr[mid]){
            end = mid - 1;
        }

    }
    return -1;
    
}
int main(){
    int arr[8] = { 1,2,3,4,5,6,7,8};
    int item = 12;
    int size = sizeof(arr) / sizeof(int);
    cout << binarySearch(arr, item, size) << endl;
    return 0;
}