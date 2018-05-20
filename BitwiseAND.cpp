#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int getMaxAND(int n, int k){
  if ( (k-1 | k) <= n ) {
    return k - 1;
  } else {
    return k - 2;
  }
}

int main(){
  int T, n, k;
  cin >> T;

  vector<int> results;
  for (int i = 0; i < T; i++) {
    cin >> n >> k;
    results.push_back(getMaxAND(n, k));
  }
  for (auto & result : results) {
    cout << result << endl;
  }
}
