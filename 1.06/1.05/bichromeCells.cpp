// 問題文 N × N のマス目があります。
// このマス目の各マスを白色または黒色に塗ることにしました (すべてのマスをどちらか片方の色に塗ります)。
// ちょうど Aマスを白色に塗るとき、黒色に塗ることになるマスはいくつあるでしょうか。

// 制約
// 1 ≦ N ≦ 100
// 0 ≦ A ≦ N * N

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  int ans = (N * N) - A;

  cout << ans << endl;
}