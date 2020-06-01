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
  int n;
  cin >> n;
  string a,b;
  cin >> a >> b;
  int ans = 0;
  map<char,int> diff;
  
  diff[a[0]] = 0;
  for (int i = 0; i < n; i++) {
    if (diff[a[i]] == 0 && a[i] != a[0]) {
      diff[a[i]] = i;
    }
  }
  
  vector<vector<int>> ansv;
  for (int i = 'z' ; i >= 'a'; i--) {
    vector<int> idx;
    int s = diff[i];
    for (int j = 0; j < n; j++) {
      if (a[j] != b[j] && b[j] == i && a[j] > i) {
        idx.push_back(j);
      }
    }
    if (idx.size() > 0 && a[s] != i) {
      cout << "-1\n";
      return;
    }
    if (idx.size() > 0) {
      ans++;
      vector<int> temp;
      temp.push_back(s);
      for (int l = 0; l < idx.size(); l++) {
        a[idx[l]] = i;
        temp.push_back(idx[l]);
      }
      ansv.push_back(temp);
    }
  }
  
  if (a == b) {
    cout << ans << "\n";
    for (auto a : ansv) {
      cout << a.size() << " ";
      for (auto p : a) {
        cout << p << " ";
      }
      cout << "\n";
    }
  } else {
    cout << "-1\n";
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    solve();
  }
  return 0;
}
