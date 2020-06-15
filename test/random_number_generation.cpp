#include <bits/stdc++.h>

using namespace std;

int main() {
  int atom_number = 100;
  int range = 100000;
  srand(time(NULL));
  for(int i = 0; i < atom_number-1; i++) {
    cout << "insert(" << rand() % range << "),";
  }
  cout << "insert(" << rand() % range << ").";
  
  return 0;
}
