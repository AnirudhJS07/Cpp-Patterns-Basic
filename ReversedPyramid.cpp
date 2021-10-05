#include <iostream>
using namespace std;

int main() {
  int rows;
  cout << "Enter how many rows:" << endl;
  cin >> rows;

  for (int i = 1; i <= rows; i++) {
    for (int z = 0; z < i; z++) {
      cout << " ";
    }
    for (int x = 1; x <= 1 + rows - i; x++) {
      cout << x << " ";
    }
    cout << "\n";
  }
  return 0;
}
