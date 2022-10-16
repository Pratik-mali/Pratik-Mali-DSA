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

int binarySearch(int arr[], int item, int start, int end){
    
    

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
    int arr[9] = { 6,7,8,9,1,2,3,4,5};
    int key = 1;
    int size = sizeof(arr) / sizeof(int);
    int p = pivot(arr,size);
    int start = 0;
    int end = size - 1;
    if(key>=arr[p] && key <=arr[size-1]){
        cout<< binarySearch(arr, key, p, end);
    }
    else{
        cout<< binarySearch(arr,key,0,p-1);
    }

}