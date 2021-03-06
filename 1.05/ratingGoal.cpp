// 問題文
// 高橋君はあるプログラミングコンテストが行われているサイトに参加しています。
// ここでは, コンテストに出場した時にこの順位に応じて「パフォーマンス」というものがつき、それによってレーティング (整数とは限らない) が次のように変化します。

// 現在のレーティングを
// aとする。
// 次のコンテストで, パフォーマンスbを取ったとする。
// そのとき, レーティングはaとbの平均まで変化する。
// 例えば, レーティングが1の人が次のコンテストでパフォーマンス1000を取ったら, レーティングは1と1000の平均である500.5になります。

// 高橋君は, 現在のレーティングが
// Rで, 次のコンテストでレーティングをちょうどGにしたいと思っています。
// そのとき, 高橋君が取るべきパフォーマンスを求めなさい。

// 制約
// 0 ≤ R,G ≤ 4500
// 入力はすべて整数

#include <bits/stdc++.h>
using namespace std;

int main() {
  int R, G;
  cin >> R >> G;

  int ans = 2 * G - R;

  cout << ans << endl;
}
