#include <iostream>
#include <vector>
#include <numeric>
//i can also remove storing the numbers and just sum them up
using namespace std;
int main(){
    vector<long long> vec;
    long long v,n;
    cin>>n;
    for(long long i = 0;i<n-1;i++){
        cin>>v;
        vec.push_back(v);
    }
    v = accumulate(vec.begin(),vec.end(),0LL);
    cout<<(n*(n+1))/2 - v;
    return 0;
}