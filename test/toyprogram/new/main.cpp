#include <bits/stdc++.h>

using namespace std;

int main() {
  int atom_number;
  int range = 100000;
  cin >> atom_number;
  srand(time(NULL));
  for(int i = 0; i < atom_number; i++) {
    cout << "insert " << rand() % range  << endl;
  }
  
  return 0;
}
