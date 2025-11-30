#include <iostream>
using namespace std;
int main() {
    long long n; //for input 
    cin >> n;
    cout<<n<<" "; //print the number first
    while (n!=1){
    if (n%2==0){ //even
        n=n/2;
        //but we need to print the number too
        cout<<n<<" ";
    }
    else if (n%2!=0 && n!=1){
        n=3*n+1;
        cout<<n<<" ";
    }
}
}//now i need to get them in a loop to iterate the process