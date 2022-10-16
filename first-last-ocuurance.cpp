#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }

        if(arr[mid] > key){
            e = mid - 1;
        }
        if(arr[mid] < key){
            s = mid + 1;
        }
        mid = (s + e)/2;
    }

    cout<<ans;

}

int lastOcc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }

        if(arr[mid] > key){
            e = mid - 1;
        }
        if(arr[mid] < key){
            s = mid + 1;
        }
        mid = (s + e)/2;
    }

    cout<<ans;

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Key";
    cin>>key;

    int firstOccurance = firstOcc(arr, n, key);
    int lastOccurance = lastOcc(arr, n, key);

    return 0;
}