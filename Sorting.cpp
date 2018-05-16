#include <bits/stdc++.h>

using namespace std;

// Bubble Sort that returns the number of swaps
int bubbleSort(vector<int> &a){
  int numberOfSwaps = 0;
  int count = a.size();

  for (size_t i = 0; i < count; i++) {

    for (size_t j = 0; j < count - 1; j++) {

      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        numberOfSwaps++;
      }

    }
  }

  return numberOfSwaps;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }

    int swaps = bubbleSort(a);
    cout << "Array is sorted in " << swaps << " swaps." << endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;

    return 0;
}
