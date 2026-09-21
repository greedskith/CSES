#include <iostream>
#include <map> //anti-hash test case wali backchodi ka fix
using namespace std;
int main() {
  // need input of n and x
  long long n, x, ans = 0, sum = 0;
  cin >> n >> x;
  // hashmap banana pdega
  map<long long, long long> mapping;
  mapping[0] = 1;
  //{0:1}
  // ab sum krna ha or dekhna ha kya woh sum aaya
  for (long long i = 0; i < n; i++) {
    // ab har element pe transverse kr aur usko prefix sum me dal
    long long input;
    cin >> input;
    sum += input;
    // isi ke andar check lagana pdega na
    long long want = sum - x;
    if (mapping.count(want)) { // count 0 ya 1 output krega
      ans += mapping[want];    // answer increase hoyega
    }
    mapping[sum]++;
  }
  cout << ans;
  return 0;
}