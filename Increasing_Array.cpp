#include <iostream>
#include <vector>
//greedy problem
using namespace std;
int main(){
    long long n,ans=0;
    vector<long long> vec;
    cin>>n;
    for(long long i=0;i<n;i++){
        long long m;
        cin>>m;
        vec.push_back(m);
        //all numbers are recorded in vector now
    }
    for(long long i=0;i<n-1;i++){
        //i want to compare if the previous element is bigger, if yes then ans += vec[i] - vec[i+1]
        if (vec[i+1]<vec[i]){
            ans += vec[i] - vec[i+1];
            vec[i+1] = vec[i];
        }
    }
    cout<<ans;
}