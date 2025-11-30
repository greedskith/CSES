#include <iostream>
using namespace std;
int main(){
    long long n; cin>>n;
    long long counter=0;
    for(long long i=1;i<=n;i++){
        counter +=__builtin_popcount(i);
    }
    cout<<counter;
}