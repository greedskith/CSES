#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n-1];
    for(long long i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n-1);
    for(long long i=0;i<n-2;i++){
        if (arr[i+1] != arr[i]+1){
            cout<<arr[i]+1;
            exit(1);
        }
    }
    if (arr[0]!=1){ 
        cout <<1;
    }
    else {cout<<n;}
}