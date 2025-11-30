//Static Range Sum Queries
#include <vector>
#include <iostream>
using namespace std;
int main(){
    //take n and q as input.
    long long n,q;  cin>>n>>q;
    long long a,b;
    //now i need an array of n elements.
    vector<long long> vec(n+1,0);
    //now i need to take inputs
    //this is also initialised by 0s now
    for(long long i =1;i<=n;i++){
        cin>>vec[i];
    }
    //i need another array that does a prefix sum!  
    //prefx[i+1]=vec[i]+prefx[i]
    //i need to make another vector first.
    vector<long long> prefx(n+1,0);
    //now it's also intitialised by 0s in all areas.
    // for 1 2 3 4 5 in q (1,1) ->  1 (1,2) -> 3 (2,4) -> 9
    //now this prefx vector is of size n+1 so i can sum the edges without problem
    //prefx[1]=prexf[0]+vec[0] & prefx[n]=prexf[n-1]+vec[n-1] in which n-1 should have been the last guy but not now
    for(long long i=1;i<=n;i++){
        prefx[i]=prefx[i-1]+vec[i]; 
        // cout<<prefx[i]<<" ";
        //it works!
    }
    //now i need to take input of ranges (a,b) and input the prefix sum such that for (2,3) -> prefx[3]-prefx[2]
    for(int i = 0;i<q;i++){
        cin>>a>>b;
        cout<<prefx[b]-prefx[a-1];
        cout<<"\n";
    }
}
