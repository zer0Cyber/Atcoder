#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  if ((N % 500) <= A) {
    printf("Yes\n");
  } else printf("No\n");

}


// 500円以上の単位は500円玉が無限にあるので、500円玉で払えばいい。
// つまり払えるかどうかは500円未満の単位の部分だけ関係がある。
// 500円未満は1円玉でしか払えないので、(N % 500)とAの大小関係を答える。