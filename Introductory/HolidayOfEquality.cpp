#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, ans = 0, maxm;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  maxm = *max_element(vec.begin(), vec.end());
  // handle case when all are same -- its taken care of!
  for (int i = 0; i < n; i++) {
    ans += maxm - vec[i];
  }
  cout << ans;
}