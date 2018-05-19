#include <bits/stdc++.h>

using namespace std;

// Using regex to check if string is valid email
bool isValidEmail(string email){
  regex valid(".+@gmail.com$");
  return regex_match(email, valid);
}

// Main Body
int main(){

  // Get number of test cases
  int N;
  cin >> N;

  // Declarations
  string name, email;
  multiset<string> nameSet;

  // Inserts valid names to nameSet
  for (int i = 0; i < N; i++) {
    cin >> name >> email;

    // calls the is valid function
    if (isValidEmail(email)) {
      nameSet.insert(name);
    }
  }

  // Outputs to screen the names
  for (auto & name : nameSet) {
    cout << name << endl;
  }
}
