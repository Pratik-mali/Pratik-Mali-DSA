#include<iostream>
using namespace std;

int sqrtN(long long int N)
{
    int start = 1;
    int end = N;
    long long int mid =start+(end-start)/2;
    long long int ans=0;
    
  
    while(start<=end){
        if(mid*mid==N){
            return mid;
        }
        else if(mid*mid>N){
            end = mid-1;
        }
        else if(mid*mid<N){
            ans = mid;
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main(){
    int N = 500;
    cout<<sqrtN(N);
    return 0;
}