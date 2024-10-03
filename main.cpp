#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

constexpr auto kMod = ll{1'000'000'007};
vl dp;
ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  if (n < 2) {
    cout << 1;
    return 0;
  }

  dp = vl(n + 1, -1);
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 3;
  for (auto i = 3; i <= n; ++i) {
    dp[i] = (1 + dp[i - 1] + dp[i - 2]) % kMod;
  }
  cout << dp[n];

  return 0;
}