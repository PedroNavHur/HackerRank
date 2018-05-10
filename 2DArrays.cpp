#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

const int SIZE = 6;

int main(){
  vector< vector<int> > arr(SIZE, vector<int>(SIZE));

  for (int arr_i = 0; arr_i < SIZE; arr_i++){
    for (int arr_j = 0; arr_j < SIZE; arr_j++){
      cin >> arr[arr_i][arr_j];
    }
  }

  int count = 0, maxCount = INT_MIN;
  for (int arr_i = 0; arr_i < (SIZE - 2); arr_i++){
    for (int arr_j = 0; arr_j < (SIZE - 2); arr_j++){
      count += arr[arr_i][arr_j];
      count += arr[arr_i][arr_j + 1];
      count += arr[arr_i][arr_j + 2];
      count += arr[arr_i + 1][arr_j + 1];
      count += arr[arr_i + 2][arr_j];
      count += arr[arr_i + 2][arr_j + 1];
      count += arr[arr_i + 2][arr_j + 2];
      if (count > maxCount) {
        maxCount = count;
      }
      count = 0;
    }
  }

  cout << maxCount;

}
