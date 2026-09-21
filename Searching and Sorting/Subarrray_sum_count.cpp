#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
  // need input of n and x
  long long n, x, ans = 0, sum = 0;
  cin >> n >> x;
  // hashmap banana pdega
  unordered_map<long long, long long> map;
  map[0] = 1;
  //{0:1}
  // ab sum krna ha or dekhna ha kya woh sum aaya
  for (int i = 0; i < n; i++) {
    // ab har element pe transverse kr aur usko prefix sum me dal
    long long input;
    cin >> input;
    sum += input;
    // isi ke andar check lagana pdega na
    long long want = sum - x;
    if (map.count(want)) { // count 0 ya 1 output krega
      ans += map[want];    // answer increase hoyega
    }
    map[sum]++;
  }
  cout << ans << endl;
  return 0;
}