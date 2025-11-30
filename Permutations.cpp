#include <iostream>
//i could have printed oven and odd in descending order to get away from some problems!
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n==1){
        cout<<"1";
        exit(0);
    }
    if (n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else if (n==4){
        cout<<"3 1 4 2";
    }
    else {
        for(int i=1;2*i-1<= n;i++){
            cout<<2*i-1<<" ";
        }
        for(int i=1;2*i<= n;i++){
            cout<<2*i<<" ";
        }
    }
}