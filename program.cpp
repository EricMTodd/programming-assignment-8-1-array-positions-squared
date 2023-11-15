#include <iostream>

using namespace std;

double alpha[50];

int main() {
  cout << "hello world!" << endl;
  for (int i = 0; i < 25; i++) {
    alpha[i] = i * i;
  }
  for (int i = 25; i < 50; i++) {
    alpha[i] = 3 * i;
  }
  for (int i = 0; i < 50; i++) {
    cout << alpha[i] << " ";
    if (i % 10 == 0 && i != 0) {
      cout << endl;
    }
  }
  return 0;
}
