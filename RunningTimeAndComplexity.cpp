#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num){
  if (num <= 1) {
    return false;
  }

  int sq = sqrt(num);
  for (int i = 2; i <= sq; i++) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

void showPrime(int n){
  if (isPrime(n)){
    cout << "Prime" << endl;
  } else {
    cout << "Not prime" << endl;
  }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, n;

    cin >> T;

    vector<int> nums;

    for (size_t i = 0; i < T; i++) {
      cin >> n;
      nums.push_back(n);
    }

    for (const auto &n : nums) {
      showPrime(n);
    }

    return 0;
}
