// 問題文
// 12月30日のM時から次の年になるまでは何時間か、求めてください。

// 制約
// 1 ≦ M ≦ 23  入力は全て整数

#include <bits/stdc++.h>
using namespace std;

int main() {
  int time;

  cin >> time;

  cout << (24 - time) + 24 << endl;
}