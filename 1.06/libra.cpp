#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  int L, R;
  cin >> a >> b >> c >> d;

  L = a + b;
  R = c + d;

  if (L > R) {
    cout << "Left" << endl;
  } else if (L == R) {
    cout << "Balanced" << endl;
  } else {
    cout << "Right" << endl;
  }

}