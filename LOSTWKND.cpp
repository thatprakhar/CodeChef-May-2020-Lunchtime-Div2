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
  int a = 0;
  int p = 0;
  for (int i = 0; i < 5; i++) {
    int temp;
    cin >> temp;
    a += temp;
  }
  cin >> p;
  a *= p;
  if (a > 120) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
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
