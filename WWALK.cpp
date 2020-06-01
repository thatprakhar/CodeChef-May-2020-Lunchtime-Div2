#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <stack>
#include <map>
#include <limits.h>
#include <cmath>
#include <cstring>
 
using namespace std;

#define mod (1000000007)
typedef uint64_t  ll;



void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n+1);
  vector<ll> b(n+1);
  
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] += a[i-1];
  }
  for (int i = 1; i <= n; i++) {
    cin >> b[i];
    b[i] +=b[i-1];
  }
  
  
  ll l1 = 0;
  ll l2 = 0;
  
  ll ans = 0;
  while (l1 < n && l2 < n) {
    if (a[l1] > b[l2]) {
      l2++;
    } else if (a[l1] < b[l2]) {
      l1++;
    } else {
      if (a[l1] == b[l2] && a[l1+1] == b[l2+1]) {
        ans += a[l1+1] - a[l1];
      }
      l1++;
      l2++;
    }
  }
  cout << ans << "\n";
}

int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    solve();
  }
  return 0;
}

