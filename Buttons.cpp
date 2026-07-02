#include <iostream>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;

  if ((c % 2 == 0 || c % 2 != 0) && a != b) {
    if (a > b) {
      cout << "First" << "\n";
    } else {
      cout << "Second" << "\n";
    }
  }

  if (c % 2 == 0 && a == b) {
    cout << "Second" << "\n";
  }
  if (c % 2 != 0 && a == b) {
    cout << "First" << "\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}